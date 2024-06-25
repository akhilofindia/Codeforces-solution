#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";
#define ce cout<<endl;
#define int long long

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

class SGtree{
	vector<int>seg;
public:
	SGtree(int n){
		seg.resize(4*n+1);
	}
	void build(int ind,int low,int high,int arr[]){
		if (low==high)
		{
			seg[ind]=arr[low];
			return;
		}
		int mid=(low+high)/2;
		build(2*ind+1,low,mid,arr);
		build(2*ind+2,mid+1,high,arr);
		seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
		return;
	}

	int query(int ind,int low,int high,int l,int r){
		//no overlap
		//l r low high     low high l r
		if (r<low || l>high )
		{
			return INT_MAX;
		}
		//complete overlap
		if (l<=low && r>=high)
		{
			return seg[ind];
		}
		//partial overlap
		int mid=(low+high)/2;
		int left=query(2*mid+1,low,mid,l,r);
		int right=query(2*mid+2,mid+1,high,l,r);
		return min(left,right);
	}

	void update(int ind,int low,int high,int i,int val){
		if (low==high)
		{
			seg[ind]=val;
			return;
		}
		int mid=(low+high)/2;
		if (i<=mid)
		{
			update(2*ind+1,low,mid,i,val);
		}else{
			update(2*ind+2,mid+1,high,i,val);
		}
		seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
	}
};

signed main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	// cout<<q<<endl;
	SGtree sg1(n);
	sg1.build(0,0,n,arr);
	int q;cin>>q;
	while(q--){
		int a,x,y;cin>>a>>x>>y;	
		// cout<<q<<endl;	
		if (a==1)
		{
			// int x,y;cin>>x>>y;
			int ans=sg1.query(0,0,n-1,x,y);
			cout<<ans<<endl;

		}else{
			sg1.update(0,0,n-1,x,y);
		}
	}


	return 0;
}
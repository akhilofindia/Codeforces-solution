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
public:
	vector<int>seg;
	SGtree(int n){
		seg.resize(4*n+1);
	}
	void build(int ind,int low,int high,int arr[],int flag){
		if (low==high)
		{
			seg[ind]=arr[low];
			return;
		}
		int mid=(low+high)/2;
		build(2*ind+1,low,mid,arr,!flag);
		build(2*ind+2,mid+1,high,arr,!flag);
		// seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
		if (flag==0)
		{
			seg[ind]=seg[2*ind+1] ^ seg[2*ind+2];
		}else{
			seg[ind]=seg[2*ind+1] | seg[2*ind+2];
		}
		return;
	}
	void update(int ind,int low,int high,int i,int val,int flag){
		if (low==high)
		{
			seg[ind]=val;
			return;
		}
		int mid=(low+high)/2;
		if (i<=mid)
		{
			update(2*ind+1,low,mid,i,val,!flag);
		}else{
			update(2*ind+2,mid+1,high,i,val,!flag);
		}
		if (flag)
		{
			seg[ind]=seg[2*ind+1] | seg[2*ind+2];
		}else{
			seg[ind]=seg[2*ind+1] ^ seg[2*ind+2];
		}
	}
};

signed main(){
	int n,q;cin>>n>>q;
	int m=pow(2,n);
	int arr[m];
	SGtree sg1(m);
	for (int i = 0; i < m; i++)
	{
		cin>>arr[i];
	}
	sg1.build(0,0,m-1,arr,n%2);
	while(q--){
		int x,y;cin>>x>>y;
		x--;
		sg1.update(0,0,m-1,x,y,n%2);
		cout<<sg1.seg[0]<<endl;
	}

	return 0;
}
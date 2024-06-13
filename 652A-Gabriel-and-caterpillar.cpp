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

bool f(int mid,int curheight,int a,int b,int h2){
	curheight=curheight+(12*mid*(a-b));
	if (curheight>=h2)
	{
		return true;
	}
	return false;
}
signed main(){
	int h1,h2; cin>>h1>>h2;
	int a,b; cin>>a>>b;
	int curheight=h1+a*8;
	int l=0,hi=1e8;
	if (curheight>=h2)
	{
		cout<<0<<endl;
	}else{
		int ans=-1;
		while(l<=hi){
			int mid=l+(hi-l)/2;
			if (f(mid,curheight,a,b,h2))
			{
				ans=mid;
				hi=mid-1;
			}else {
				l=mid+1;
			}
		}
		if (ans==-1)
		{
			cout<<-1<<endl;
		}else{
			cout<<ans<<endl;
		}
	}


	return 0;
}
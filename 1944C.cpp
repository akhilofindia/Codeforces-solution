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

signed main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>v(n);
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
			mp[v[i]]++;
		}
		int cnt=0;
		int ans=n+1;
		int flag=0;
		for (auto i: mp)
		{
			if (cnt!=i.first)
			{
				ans=min(ans,cnt);
			}
			if (flag && i.second==1)
			{
				ans=min(ans,cnt);
			}
			if (i.second==1)
			{
				flag=1;
			}
			cnt++;
		}
		ans=min(ans,cnt);
		cout<<ans<<endl;
	}

	return 0;
}
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
		int n,q; cin>>n>>q;
		string s1,s2;cin>>s1>>s2;
		vector<vector<int>>prea(n+1,vector<int>(26,0)),preb(n+1,vector<int>(26,0));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				prea[i+1][j]=prea[i][j];
				preb[i+1][j]=preb[i][j];
			}
			prea[i+1][s1[i]-'a']++;
			preb[i+1][s2[i]-'a']++;
		}
		while(q--){
			int l,r;cin>>l>>r;
			l--,r--;
			vector<int>mpa(26,0),mpb(26,0);
			for (int i = 0; i < 26; i++)
			{
				mpa[i]=prea[r+1][i]-prea[l][i];
				mpb[i]=preb[r+1][i]-preb[l][i];
			}
			int ans=0;
			for (int i = 0; i < 26; i++)
			{
				if (mpb[i]>mpa[i])
				{
					ans+=(mpb[i]-mpa[i]);
				}
			}
			cout<<ans<<endl;
		}

	}

	return 0;
}
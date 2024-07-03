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

int lcs(string &a,string &b,int i,int j,vector<vector<int>>&dp){
	if (i==a.size() || j==b.size())
	{
		return 0;
	}
	if (dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	if (a[i]==b[j])
	{
		dp[i][j]=1+lcs(a,b,i+1,j+1,dp);
	}else{
		dp[i][j]=max(lcs(a,b,i+1,j,dp),lcs(a,b,i,j+1,dp));
	}
	return dp[i][j];
}
signed main(){
	int tc;cin>>tc;
	while(tc--){
		string s1,s2; cin>>s1>>s2;
		int n=s1.size();
		int m=s2.size();
		vector<vector<int>>dp(n,vector<int>(m,-1));
		int overlap=lcs(s1,s2,0,0,dp);
		cout<<overlap<<endl;
		int mn=n+m-overlap;
		cout<<mn<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll i,ll j,vector<vector<ll>>& vis,vector<vector<ll>>&arr,ll &cnt){
	ll n=arr.size();
	ll m=arr[0].size();
	vis[i][j]=1;
	cnt+=arr[i][j];
	ll drow[4]={1,0,-1,0};
	ll dcol[4]={0,-1,0,1};
	for (ll x = 0; x < 4; x++)
	{
		ll nrow=i+drow[x];
		ll ncol=j+dcol[x];
		if (nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && arr[nrow][ncol])
		{
			dfs(nrow,ncol,vis,arr,cnt);
		}
	}
	return ;
}
int main(){
	ll tc;cin>>tc;
	while(tc--){
		ll n,m;
		cin>>n>>m;
		vector<vector<ll>> arr(n,vector<ll>(m,0));
		vector<vector<ll>> vis(n,vector<ll>(m,0));
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				cin>>arr[i][j];
			}
		}
		ll ans=0;
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < m; j++)
			{
				if (!vis[i][j] && arr[i][j])
				{
					ll cnt=0;
					dfs(i,j,vis,arr,cnt);
					ans=max(ans,cnt);
				}
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
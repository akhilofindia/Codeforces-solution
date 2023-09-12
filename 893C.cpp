#include <bits/stdc++.h>
using namespace std;

int n,m, cost[100000], mn;
long long ans = 0;
bool vis[100000];
vector<int> adj[100000];

void dfs(int node){
	if (!vis[node])
	{
		vis[node]=true;
		mn=min(mn,cost[node]);
		for (int i : adj[node])
		{
			dfs(i);
		}
	}
}
int main(){
	cin>>n>>m;
	for (int i = 0; i < n; i++)
	{
		cin>>cost[i];
	}
	for (int i = 0; i < m; i++)
	{
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			mn=cost[i];
			dfs(i);
			ans+=mn;
		}
	}
	cout<<ans<<endl;

	return 0;
}
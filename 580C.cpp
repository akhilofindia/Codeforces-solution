#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj,vector <int> &v,
	int &ans,int parent,int m,int &k){
	if(v[node]==1){
		m++;
	}else{
		m=0;
	}
	if (m>k) return;
	if(adj[node].size()==1 && m<=k && node!=1){
		ans++;
	}
	for(auto it:adj[node]){
		if(it!=parent){
			dfs(it,adj,v,ans,node,m,k);
		}
	}
}
int main(){
	int n,k;cin>>n>>k;
	vector <int>v(n+1);
	for(int i=1;i<n+1;i++){
		cin>>v[i];
	}
	vector<vector<int>> adj(n+1);
	for(int i=1;i<n;i++)
	{
	   int a,b;
	   cin>>a>>b;
	   adj[a].push_back(b);
	   adj[b].push_back(a);
	}
	int ans=0;
	dfs(1,adj,v,ans,-1,0,k);
	cout<<ans<<endl;

	return 0;
}
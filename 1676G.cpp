#include <bits/stdc++.h>
using namespace std;

int dfs(int node,int par,vector<int>adj[],string s,vector<int>&white,vector<int>&black){
    if(s[node-1]=='W'){                     //checking color of node
        white[node]++;
    }
    else{
        black[node]++;
    }
    int ans=0;
    for (auto& u: adj[node])                //transversing in graph
    {
    	if (u==par)                        //if no adj element,no need to check
    	{
    		continue;
    	}
    	ans+=dfs(u,node,adj,s,white,black); //recursion to check all subtrees
    	white[node]+=white[u];            //adding total white color in a tree
    	black[node]+=black[u];            //adding total black color in a tree
    }
    if (white[node]==black[node])         
    {
    	ans++;
    }
    return ans;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int>adj[n+1];                  //adjacency list will contain connected nodes
		for (int i = 2; i < n+1; i++)
		{
			int p; cin>>p;
			adj[i].push_back(p);                //created adjacent list
			adj[p].push_back(i);
		}
		string s;cin>>s;
		vector<int>white(n+1);
		vector<int>black(n+1);
		int ans=dfs(1,0,adj,s,white,black);
		cout<<ans<<endl;
	}

	return 0;
}
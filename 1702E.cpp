#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}


bool isBipartite( vector<vector<int>> &adj,int V)
{
    // vector to store colour of vertex
    // assigning all to -1 i.e. uncoloured
    // colours are either 0 or 1
      // for understanding take 0 as red and 1 as blue
    vector<int> col(V, -1);
 
    // queue for BFS storing {vertex , colour}
    queue<pair<int, int> > q;
   
      //loop incase graph is not connected
    for (int i = 0; i < V; i++) {
       
      //if not coloured
        if (col[i] == -1) {
           
          //colouring with 0 i.e. red
            q.push({ i, 0 });
            col[i] = 0;
           
            while (!q.empty()) {
                pair<int, int> p = q.front();
                q.pop();
               
                  //current vertex
                int v = p.first;
                  //colour of current vertex
                int c = p.second;
                 
                  //traversing vertexes connected to current vertex
                for (int j : adj[v]) {
                   
                      //if already coloured with parent vertex color
                      //then bipartite graph is not possible
                    if (col[j] == c)
                        return 0;
                   
                      //if uncoloured
                    if (col[j] == -1) {
                      //colouring with opposite color to that of parent
                        col[j] = (c) ? 0 : 1;
                        q.push({ j, col[j] });
                    }
                }
            }
        }
    }
    //if all vertexes are coloured such that 
      //no two connected vertex have same colours
    return 1;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int flag=1;
		vector<vector<int>>adj(n);
		for (int i = 0; i < n; i++)
		{
			int a,b; cin>>a>>b;
			a--,b--;
			adj[a].push_back(b);
			adj[b].push_back(a);
			if (a==b || adj[a].size()>2 || adj[b].size()>2)
			{
				flag=0;
			}
		}
		if (flag==0)
		{
			cn;
		}else{
			if (isBipartite(adj,n))
			{
				cy;
			}else cn;
		}
	}

	return 0;
}
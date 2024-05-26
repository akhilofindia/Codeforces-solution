#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int shortest(vector<vector<int>>& adj, int x, int y) {
    vector<int> dist(adj.size(), -1);
    queue<int> q;
    q.push(x);
    dist[x] = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int i : adj[node]) {
            if (dist[i] == -1) {
                dist[i] = dist[node]+1;
                q.push(i);
                if (i == y){
                    return dist[i];
                }
            }
        }
    }
    return -1;
}

int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        int x,y; cin>>x>>y;
        vector<vector<int>>adj(n+1);
        for (int i = 0; i < n-1; i++)
        {
            int a,b; cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int dist=shortest(adj,x,y);
        cout<<dist<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;        


void dfs(int i, vector<int> & vis, vector<vector<int>>& adj){
    vis[i] = 1;
    for( int neigh : adj[i] ){
        if(vis[neigh] == 0){
            dfs(neigh, vis, adj);
        }
    }

}

void solve(){
    int n;  cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0; i<n; i++)  cin >> a[i];
    for(int i=0; i<n; i++)  cin >> b[i];

    vector<vector<int>> adj(n+1);
    for(int i=0; i<n; i++){
        adj[a[i]].push_back(b[i]);
    }

    vector<int> vis(n+1, 0);
    vis[0] = 1;
    int cnt = 1;
    for(int i=1;i<=n; i++){
        if(vis[i] == 0){
            dfs(i, vis, adj);
            cnt = (cnt*2) % MOD;
        }
    }

    cout << cnt << '\n';
    
}

signed main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
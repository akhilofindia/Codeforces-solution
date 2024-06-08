#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

void bfs(int ind,vector<vector<int>>& adj,vector<ll>& colors,vector<int>& vis, map<ll,int>& mp) {
    queue<int> q;
    q.push(ind);
    vis[ind]=1;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        mp[colors[node]]++;
        for (int i : adj[node]) 
        {
            if (!vis[i]) 
            {
                vis[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> colors(n);
    for (ll i = 0; i < n; i++) 
    {
        cin>>colors[i];
    }
    vector<vector<int>> adj(n);
    for (ll i = 0; i < m; i++) 
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    vector<int> vis(n,0);
    ll ans = 0;
    for (ll i = 0; i < n; i++) 
    {
        if (!vis[i]) 
        {
            map<ll,int> mp;
            bfs(i,adj,colors,vis,mp);
            int mx=0;
            int total=0;
            for (auto it : mp) 
            {
                mx = max(mx,it.second);
                total+=it.second;
            }
            ans+=total-mx;
        }
    }
    cout<<ans<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool checkCycle(int node, vector<int>& vis, vector<int>* adj, vector<int>& dfsvis)
{
    vis[node] = 1;
    dfsvis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (checkCycle(it, vis, adj, dfsvis)){
                return true;
            }
        }
        else if (dfsvis[it])
        {
            return true;
        }
    }
    dfsvis[node] = 0;
    return false;
}

int main()
{
    int tc; cin >> tc;
    while (tc--){
        int n, k;
        cin >> n >> k;
        vector<int> vis(n+1, 0);
        vector<int> dfsvis(n+1, 0);
        vector<int> adj[n+1];

        for (int i = 0; i < k; i++)
        {
            vector<int> v(n);
            for (int j = 0; j < n; j++)
            {
                cin >> v[j];
            }
            for (int j = 2; j < n; j++)
            {
                adj[v[j-1]].push_back(v[j]);
            }
        }
        bool flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                if (checkCycle(i, vis, adj, dfsvis))
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cn;
        }else{
        	cy;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int vis[500][500];
int cnt=1;
void dfs(int x,int y, vector<vector<char>>&a ,int k){
    vis[x][y]=1;
    int n=a.size();
    int m=a[0].size();
    int mx[4]={-1,0,1,0};
    int my[4]={0,1,0,-1};
    for (int i = 0; i < 4; i++)
    {
        int dx=x+mx[i];
        int dy=y+my[i];
        if (dx>=0 && dx<n && dy>=0 && dy<m && a[dx][dy]=='.' && !vis[dx][dy])
        {
            dfs(dx,dy,a,k);
        }   
    }
    if (cnt>k)
    {
        return;
    }
    a[x][y]='X';
    cnt++;
}

int main(){
    int n,m,k; cin>>n>>m>>k;
    vector<vector<char>>a(n,vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]=='.')
            {
                dfs(i,j,a,k);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}
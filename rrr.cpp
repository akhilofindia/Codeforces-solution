#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

bool dfs(vector<vector<int>>& grid, vector<vector<bool>>& vis, int h, int w, int eng, int sr, int sc, int er, int ec) {
    if (sr<0 || sr>=h || sc<0 || sc>=w || grid[sr][sc]==-1 || vis[sr][sc]) {
        return false;
    }
    vis[sr][sc] = true; 
    if (sr == er && sc == ec) return true;

    eng = max(eng, grid[sr][sc]);

    if (eng == 0) return false;
    for (int i = 0; i < 4; i++) 
    {
        int nr = sr+dr[i];
        int nc = sc+dc[i];
        if (dfs(grid,vis,h,w,eng-1,nr,nc,er,ec)) {
            return true;
        }
    }
    return false;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> grid(h, vector<int>(w, 0)); 
    int sr, sc, er, ec;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char c; cin>>c;
            if (c=='#')
            {
                grid[i][j]=-1;
            }else if (c=='S')
            {
                sr=i;
                sc=j;
                grid[i][j]=0;
            }else if (c=='T')
            {
                er=i;
                ec=j;
                grid[i][j]=0;
            }
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r,c,eng; 
        cin>>r>>c>>eng;
        grid[r-1][c-1] = eng; 
    }
    vector<vector<bool>>vis(h, vector<bool>(w, false));
    if (dfs(grid,vis,h,w,0,sr,sc,er,ec)) 
    {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }

    return 0;
}
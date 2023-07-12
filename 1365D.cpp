#include <bits/stdc++.h>
using namespace std;
void dfs(int i,int j,vector<vector<char>> &v){
	int drow[]={1,0,-1,0};
	int dcol[]={0,-1,0,1};
	v[i][j]='!';
	int z=v.size(); 
	int y=v[0].size();
	for (int x = 0; x < 4; x++)
	{
		int nrow=i+drow[x];
		int ncol=j+dcol[x];
		if (nrow>=0 && nrow<z && ncol>=0 && ncol<y && v[nrow][ncol]!='#' && v[nrow][ncol]!='!')
		{
			dfs(nrow,ncol,v);
		}
	}
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m; cin>>n>>m;
		vector<vector<char>> v(n,vector<char>(m));
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin>>v[i][j];
				if (v[i][j]=='G')
				{
					cnt++;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j]=='B')
				{
					if (i-1>=0 && v[i-1][j]!='B') v[i-1][j]='#';
					if (j-1>=0 && v[i][j-1]!='B') v[i][j-1]='#';
					if (i+1<n && v[i+1][j]!='B') v[i+1][j]='#';
					if (j+1<m && v[i][j+1]!='B') v[i][j+1]='#';
				}
			}
		}
		int count=0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j]=='G')
				{
					count++;
				}
			}
		}
		int flag=0;
		if (cnt!=count)
		{
			flag=1;
		}
		if (v[n-1][m-1]!='#')
		{
			dfs(n-1,m-1,v);
		}
		int ans=0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j]=='G')
				{
					ans++;
				}
			}
		}
		if (ans!=0)
		{
			flag=1;
		}
		if (flag)
		{
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;	
		}
	}

	return 0;
}
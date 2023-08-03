#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v(5, vector<int> (5, 0));
	queue<pair<pair<int,int>,int>>q;
	vector<vector<int>> vis(5, vector<int> (5, 0));
	v[0][0]=1;
	v[4][4]=1;
	v[0][4]=1;
	v[4][0]=1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v[i][j]==1)
			{
				q.push({{i,j},0});
				vis[i][j]=1;
			}
		}
	}
	int drow[] = {-1,0,1,0};
	int dcol[] = {0,1,0,-1};
	int tm=0;
	int cnt=0;
	while(!q.empty()){
		int x=q.front().first.first;
		int y=q.front().first.second;
		int t=q.front().second;
		q.pop();
		tm=max(tm,t);
		for (int i = 0; i < 4; i++)
		{
			int nrow=x+drow[i];
			int ncol=y+dcol[i];
			if (nrow<5 && ncol>=0 && nrow>=0 && ncol<5 && vis[nrow][ncol]!=1)
			{
				vis[nrow][ncol]=1;
				q.push({{nrow,ncol},t+1});
			}
		}
	}
	cout<<tm<<endl;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	char arr[n][m];
	char ch[2]={'B','W'};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin>>arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j]=='.')
			{
				arr[i][j]=ch[(i+j)%2];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	return 0;
}
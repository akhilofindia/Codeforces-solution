#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		int a=0,b=0;
		int h,w;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin>>arr[i][j];
				if (arr[i][j]>arr[a][b])
				{
					a=i;
					b=j;
				}
			}
		}
		h=max(a+1,n-a);
		w=max(b+1,m-b);
		cout<<h*w<<endl;
	}

	return 0;
}
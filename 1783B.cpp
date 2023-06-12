#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n ; cin>>n;
		int arr[n][n];
		int a=1;
		int b=n*n;
		for (int i = 0; i < n; i++)
		{
			if (i%2==1)
			{
				for (int j = 0; j < n; j++)
				{
					if ((i+j)%2==0)
					{
						arr[i][j]=b;
						b--;
					}else{
						arr[i][j]=a;
						a++;
					}
				}
			}else{
				for (int j=n-1;j>=0;j--)
				{
					if ((i+j)%2==0)
					{
						arr[i][j]=b;
						b--;
					}else{
						arr[i][j]=a;
						a++;
					}
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}
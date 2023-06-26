#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		char arr[n][n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin>>arr[i][j];
			}
		}
		int flag=0; 
		for (int i = n-2; i >=0; i--)
		{
			for (int j = n-2; j >= 0; j--)
			{
				if (arr[i][j]=='1' && arr[i+1][j]=='0' && arr[i][j+1]=='0')
				{
					flag=1;
					break;
				}
			}
		}
		if (flag==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
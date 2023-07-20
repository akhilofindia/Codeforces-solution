#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		char arr[8][8];
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin>>arr[i][j];
			}
		}
		string ans;
		for (int i = 0; i < 8; i++)
		{
		    int cnt=0;
			for (int j = 0; j < 8; j++)
			{
				if (arr[i][j]=='R')
				{
					cnt++;
				}
			}
			if (cnt==8)
			{
				ans='R';
				break;
			}
		}
		if (ans=="R")
		{
			cout<<'R'<<endl;
		}else{
			cout<<'B'<<endl;
		}

	}

	return 0;
}
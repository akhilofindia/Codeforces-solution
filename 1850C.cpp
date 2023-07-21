#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		char a[8][8];
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin>>a[i][j];
			}
		}
		string s="";
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (a[i][j]!='.')
				{
					s+=a[i][j];
				}
			}
		}
		cout<<s<<endl;
	}

	return 0;
}
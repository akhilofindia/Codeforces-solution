#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int a,b; cin>>a>>b;
		if (a==b)
		{
			for (int i = 0; i < a; i++)
			{
				cout<<"01";
			}
		}else if (a>b)
		{
			for (int i = 0; i < b; i++)
			{
				cout<<"01";
			}
			for (int i = 0; i < a-b; i++)
			{
				cout<<"0";
			}
		}else{
			for (int i = 0; i < a; i++)
			{
				cout<<"10";
			}
			for (int i = 0; i < b-a; i++)
			{
				cout<<"1";
			}
		}
		cout<<endl;
	}

	return 0;
}
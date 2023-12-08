#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		char zz;
		int n;
		cin>>zz>>n;
		for (int i = 1; i < 9; i++)
		{
			if (i==n)
			{
				/* code */
			}else
				cout<<zz<<i<<endl;
		}
		char arr[8]={'a','b','c','d','e','f','g','h'};
		for (int i = 0; i < 8; i++)
		{
			if (arr[i]==zz)
			{
				/* code */
			}else{
				cout<<arr[i]<<n<<endl;
			}
		}
	}

	return 0;
}
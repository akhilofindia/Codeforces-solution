#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		char arr[n];
		int flag=0,first=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i]=='B')
			{
				first++;
				i+=k-1;
			}
		}
		cout<<first<<endl;
	}

	return 0;
}
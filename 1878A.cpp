#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		int arr[n];
		int flag=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==k)
			{
				flag=1;
				break;
			}
		}
		if (flag)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
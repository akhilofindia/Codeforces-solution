#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n-1];
		for (long long i = 0; i < n-1; i++)
		{
			cin>>arr[i];
		}
		long long a=0;
		for (long long i = 0; i < n-1; i++)
		{
			a+=arr[i];
		}
		cout<<(-1)*a<<endl;
	}

	return 0;
}
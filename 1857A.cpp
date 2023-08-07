#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		long long sum=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		if (sum%2==0)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
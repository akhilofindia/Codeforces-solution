#include <bits/stdc++.h>
using namespace std;

int main(){
	int mod=1e9+7;
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		long long ans=1;
		for (long long i = 0; i < k; i++)
		{
			ans=(ans*n)%mod;
		}
		cout<<ans<<endl;
	}

	return 0;
}
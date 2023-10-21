#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long sum=n*(n+1)/2;
		long long ans=0;
		for (long long i = 1; i <= n; i*=2)
		{
			ans+=i;
		}
		cout<<sum-(2*ans)<<endl;
	}

	return 0;
}
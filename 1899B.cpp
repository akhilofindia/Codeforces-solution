#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		for (long long i = 1; i <= n; i++)
		{
			arr[i]+=arr[i-1];
		}
		long long ans=0;
		for (long long i = 1; i <= n/2; i++)
		{
			if (n%i==0)
			{
				long long minn=1e15;
				long long maxx=0;
				for (long long j = i; j <= n; j+=i)
				{
					long long f=arr[j]-arr[j-i];
					minn=min(minn,f);
					maxx=max(maxx,f);
				}
				ans=max(ans,maxx-minn);
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
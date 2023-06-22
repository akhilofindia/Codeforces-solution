#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		if (n<=k)
		{
			cout<<1<<endl;
		}else{
			long long ans=INT_MAX;
			for (long long i = 1; i*i <= n; i++)
			{
				if (n%i==0)
				{
					if (k>=i)
					{
						ans=min(ans,n/i);
					}
					if (k>=n/i)
					{
						ans=min(ans,i);
					}
				}
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}
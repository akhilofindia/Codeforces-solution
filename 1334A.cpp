#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,x;
		cin>>n>>x;
		long long arr[n];
		for (long long i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		sort(arr+1,arr+n+1);
		reverse(arr+1,arr+n+1);
		long long ans=0,sum=0;
		for (long long i = 1; i <= n; i++)
		{
			sum+=arr[i];
			if (sum/i>=x)
			{
				ans++;
			}else{
				break;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
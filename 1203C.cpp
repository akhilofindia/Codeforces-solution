#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	long long arr[n];
	long long g=0;
	for (long long i = 0; i < n; i++)
	{
		cin>>arr[i];
		g=__gcd(g,arr[i]);
	}
	long long ans=0;
	for (long long i = 1; i*i <= g; i++)
	{
		if (g%i==0)
		{
			if (i*i==g)
			{
				ans++;
			}else{
				ans+=2;
			}
		}
	}
	cout<<ans<<endl;

	return 0;
}
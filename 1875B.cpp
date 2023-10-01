#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long n,m,k;cin>>n>>m>>k;
		long a[n],b[n];
		long sum1=0;
		long y=INT_MAX;
		long z=INT_MIN;
		for (long i = 0; i < n; i++)
		{
			cin>>a[i];
			sum1+=a[i];
			if (a[i]<y)
			{
				y=a[i];
			}
		}
		for (long i = 0; i < m; i++)
		{
			cin>>b[i];
			if (b[i]>z)
			{
				z=b[i];
			}
		}
		if (k%2==0)
		{
			cout<<sum1<<endl;
		}else{
			sum1=max(sum1,sum1-y+z);
			cout<<sum1<<endl;
		}
	}

	return 0;
}
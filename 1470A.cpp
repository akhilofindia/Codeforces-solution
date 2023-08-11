#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,m;cin>>n>>m;
		long long cnt=0;
		long long a[n+1],b[m+1];
		for (long long i = 1; i <= n; i++)
		{
			cin>>a[i];
		}
		for (long long i = 1; i <= m; i++)
		{
			cin>>b[i];
		}
		long long c[n];
		for (long long i = 1; i <= n; i++)
		{
			c[i]=b[a[i]];
		}
		sort(c+1,c+n+1);
		long long j=1;
		for (long long i = n; i >= 1; i--)
		{
			if (b[j]<c[i])
			{
				cnt+=b[j];
				j++;
			}else{
				cnt+=c[i];
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}
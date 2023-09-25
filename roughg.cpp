#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long>a(n),b(n);
		long long sum1=0,sum2=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>a[i];
			sum1+=a[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin>>b[i];
			sum2+=b[i];
		}
		long long x=(*min_element(a.begin(),a.end()))*n;
		long long y=(*min_element(b.begin(),b.end()))*n;
		long long ans=min(x+sum2,y+sum1);
		cout<<ans<<endl;
	}

	return 0;
}
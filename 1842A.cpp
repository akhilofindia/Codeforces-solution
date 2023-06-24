#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,m;
		cin>>n>>m;
		long long a[n],b[m];
		long long sum1=0,sum2=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>a[i];
			sum1+=a[i];
		}
		for (long long i = 0; i < m; i++)
		{
			cin>>b[i];
			sum2+=b[i];
		}
		if (sum1>sum2)
		{
			cout<<"Tsondu"<<endl;
		}else if (sum1==sum2)
		{
			cout<<"Draw"<<endl;
		}else{
			cout<<"Tenzing"<<endl;
		}
	}

	return 0;
}
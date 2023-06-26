#include <bits/stdc++.h>
using namespace std;

int main(){
	long long tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		long long flag=0;
		for (long long i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		for (long long i = 1; i <= n; i++)
		{
			bool ok=false;
			for (long long j = 2; j <= i+1; j++)
			{
				if (arr[i]%j!=0)      //if divisible by all,then ok will be false;
				{
					ok=true;
					break;
				}
			}
			if (ok==false)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
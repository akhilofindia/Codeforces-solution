#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		long long sum=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		long long cnt=0,flag=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==1)
			{
				cnt++;
			}
		}
		if (n==1)
		{
			flag=0;
		}else if (sum-n-cnt>=0)
		{
			flag=1;
		}
		if (flag)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}
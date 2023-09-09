#include <bits/stdc++.h>
using namespace std;

int main(){
	long long tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		long long sum=0;
		for (long long i = 0; i < n; i++)
		{
			long long cnt=arr[i];
			long long j=i;
			while(j<n && ((arr[i]>0 && arr[j]>0) || (arr[i]<0 && arr[j]<0))){
				cnt=max(cnt,arr[j]);
				j++;
			}
			sum+=cnt;
			i=j-1;
		}
		cout<<sum<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr+1,arr+n);
		long long sum=arr[0];
		for (long long i = 1; i < n; i++)
		{
			if (arr[i]>sum)
			{
				sum=(sum+arr[i]+1)/2;
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}
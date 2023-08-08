#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		long long ans1,ans2,ans3;
		ans1=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
		ans2=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
		ans3=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
		cout<<max(max(ans1,ans2),ans3)<<endl;
	}

	return 0;
}
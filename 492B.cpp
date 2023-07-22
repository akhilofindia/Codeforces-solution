#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,l;cin>>n>>l;
	double arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	double ans=max(arr[0],l-arr[n-1]);
	for (int i = 1; i < n; i++)
	{
		ans=max(ans,(arr[i]-arr[i-1])/2);
	}
	cout<<fixed<<setprecision(10)<<ans<<endl;

	return 0;
}
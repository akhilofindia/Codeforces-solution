#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,cnt=1,mx=1;
	cin>>n;
	long long arr[n];
	for (long long i = 1; i <= n; i++)
	{
		cin>>arr[i];
	}
	for (long long i = 2; i <= n; i++)
	{
		if (arr[i]<=arr[i-1]*2)
		{
			cnt++;
		}else{
			cnt=1;
		}
		mx=max(mx,cnt);
	}
	cout<<mx<<endl;

	return 0;
}
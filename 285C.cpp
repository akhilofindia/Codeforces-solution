#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	long long arr[n],arr2[n];
	for (long long i = 0; i < n; i++)
	{
		cin>>arr[i];
		arr2[i]=i+1;
	}
	sort(arr,arr+n);
	long long sum=0;
	for (long long i = 0; i < n; i++)
	{
		sum+=abs(arr[i]-arr2[i]);
	}
	cout<<sum<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	long long arr[n];
	map<long long,long long>mp;
	for (long long i = 0; i < n; i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
    }
	sort(arr,arr+n);
	long long beauty=arr[n-1]-arr[0];
	long long ans=mp[arr[0]]*mp[arr[n-1]];
	if (mp.size()==1)
	{
		cout<<0<<" "<<(n*(n-1))/2<<endl;
	}else{
		cout<<beauty<<" "<<ans<<endl;
	}
	

	return 0;
}
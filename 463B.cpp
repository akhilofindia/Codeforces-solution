#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	vector<long long>arr(n+1,0);
	for (long long i = 1; i <= n; i++)
	{
		cin>>arr[i];
	}
	long long energy=0,cost=0;
	for (long long i = 0; i < n; i++)
	{
		if (energy>=0)
		{
			energy+=arr[i]-arr[i+1];
		}else{
			cost-=energy;
			energy=arr[i]-arr[i+1];
		}
	}
	if (energy<0)
	{
		cost-=energy;
	}
	cout<<cost<<endl;

	return 0;
}
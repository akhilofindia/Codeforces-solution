#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	int s1=0;
	int ans;
	for (int i = 0; i < n; i++)
	{
		s1+=arr[i];
		if (s1>=(sum+1)/2)
		{
			ans=i+1;
			break;
		}
	}
	cout<<ans<<endl;

	return 0;
}
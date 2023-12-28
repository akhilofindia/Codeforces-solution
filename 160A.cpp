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
	int cnt=0,g=0;
	sort(arr,arr+n,greater<int>());
	for (int i = 0; i < n; i++)
	{
		cnt+=arr[i];
		g++;
		if (cnt>sum/2)
		{
			break;
		}
	}
	cout<<g<<endl;

	return 0;
}
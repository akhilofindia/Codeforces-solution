#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; cin>>n>>k;
	int arr[k];
	for (int i = 0; i < k; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+k);
	int mn=arr[n-1]-arr[0];
	for (int i = 1; i <= (k-n); i++)
	{
		if (mn>arr[i+n-1]-arr[i])
		{
			mn=arr[i+n-1]-arr[i];
		}
	}
	cout<<mn<<endl;

	return 0;
}
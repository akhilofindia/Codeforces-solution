#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	vector<int>diff;
	int m=5;
	// cout<<arr[5]-arr[1]<<endl;
	for (int i = 0; i < n-m; i++)
	{
		int x=arr[i+m-1]-arr[i];
		diff.push_back(x); 
	}
	sort(diff.begin(),diff.end());
	// cout<<diff[0]<<endl;
	for (int i = 0; i < diff.size(); i++)
	{
		cout<<diff[i]<<" ";
	}

	return 0;
}
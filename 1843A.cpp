#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int a=0;
		sort(arr,arr+n);
		for (int i = 0; i < n/2; i++)
		{
			a+=(arr[n-i-1]-arr[i]);
		}
		cout<<a<<endl;
	
	}

	return 0;
}
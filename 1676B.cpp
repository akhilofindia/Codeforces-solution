#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int cnt=0;
		int mn=arr[0];
		for (int i = 1; i < n; i++)
		{
			cnt+=(arr[i]-mn);
		}
		cout<<cnt<<endl;

	}

	return 0;
}
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
		sort(arr,arr+n);
		int ans=INT_MAX;
		for (int i = 0; i < n-2; i++)
		{
			ans=min({ans,arr[i+1]-arr[i]+arr[i+2]-arr[i], arr[i+2]-arr[i]});
		}
		cout<<ans<<endl;
	}

	return 0;
}
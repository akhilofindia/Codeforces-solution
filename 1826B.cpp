#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		int ans=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i <= n/2; i++)
		{
			ans=__gcd(ans,abs(arr[i]-arr[n-1-i]));
		}
		cout<<ans<<endl;
	}

	return 0;
}
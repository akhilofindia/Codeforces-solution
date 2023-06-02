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
		int ans=0;
		for (int i = 0; i < n-1; i++)
		{
			ans=max(ans,(arr[i]-arr[0]));
			ans=max(ans,(arr[n-1]-arr[i]));
			ans=max(ans,arr[i]-arr[i+1]%n);
		}

		cout<<ans<<endl;
	}

	return 0;
}
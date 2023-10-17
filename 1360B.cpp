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
			int mn=arr[1]-arr[0];
			for (int i = 2; i < n; i++)
			{
				mn=min(mn,arr[i]-arr[i-1]);
			}
			cout<<mn<<endl;
		}

		return 0;
	}
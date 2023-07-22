#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		vector<int>v;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int x=n/2;
		for (int i = x; i < n; i++)
		{
			if (i==n-i-1)
			{
				cout<<arr[i]<<" ";
			}else{
				cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,x; cin>>n>>x;
		int arr[2*n];
		for (int i = 0; i < 2*n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+2*n);
		int count=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i+n]-arr[i]<x)
			{
				count=1;
				break;
			}
		}
		if (count==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
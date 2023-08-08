#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int mx=1;
	sort(arr,arr+n);
	int l=0,r=0;
	while(r<n){
		if (arr[r]-arr[l]<=5)
		{
			mx=max(mx,r-l+1);
			r++;
		}else{
			l++;
		}
	}
	cout<<mx<<endl;

	return 0;
}
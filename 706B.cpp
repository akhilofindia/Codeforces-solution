#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int q;cin>>q;
	sort(arr,arr+n);
	while(q--){
		int m;cin>>m;
		cout<<upper_bound(arr,arr+n,m)-arr<<endl;
	}

	return 0;
}
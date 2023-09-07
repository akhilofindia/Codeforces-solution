#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int presum[n];
	presum[0]=arr[0];
	for (int i = 1; i < n; i++)
	{
		presum[i]=arr[i]+presum[i-1];
	}
	for (int i = 0; i < n; i++)
	{
		cout<<presum[i]<<" ";
	}cout<<endl;
	int q; cin>>q;
	while(q--){
		int x;cin>>x;
		for (int i = 0; i < n; i++)
		{
			if (presum[i]<=x && presum[i+1]>x)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}

	return 0;
}
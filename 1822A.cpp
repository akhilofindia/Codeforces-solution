#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,t; cin>>n>>t;
		int arr[n],arr2[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>arr2[i];
		}
		int a=-1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]<=t-i)
			{
				if (a==-1 || arr2[i]>arr2[a-1])
				{
					a=i+1;
				}
			}
		}
		cout<<a<<endl;
	}

	return 0;
}
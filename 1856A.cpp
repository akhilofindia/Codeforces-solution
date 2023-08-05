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
		int cnt=0;
		for (int i = 0; i < n-1; i++)
		{
			if (arr[i+1]<arr[i])
			{
				cnt=max(cnt,arr[i]);
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}
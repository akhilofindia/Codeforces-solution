#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int flag=0;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for (int i = 0; i < n-1; i++)
		{
			if (abs(arr[i]-arr[i+1])>1)
			{
				flag=1;
				break;
			}
		}
		if (flag)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
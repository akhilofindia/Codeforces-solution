#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		int odd=0,even=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (arr[i]%2==0)
			{
				even++;
			}else{
				odd++;
			}
		}
		sort(arr,arr+n);
		if (arr[0]%2==1)
		{
			cout<<"YES"<<endl;
		}else{
			if (odd>=1)
			{
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
		}
	}

	return 0;
}
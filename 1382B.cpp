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
		int ans=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==1)
			{
				ans++;
			}else{
				break;
			}
		}
		if (ans==n)
		{
			ans=ans-1;
		}
		if (ans%2==1)
		{
			cout<<"Second"<<endl;
		}else{
			cout<<"First"<<endl;
		}
	}

	return 0;
}
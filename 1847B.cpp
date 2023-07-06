#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int ans=INT_MAX;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			ans&=arr[i];
			if (ans==0)
			{
				cnt++;
				ans=INT_MAX;
			}
		}
		if (cnt==0)
		{
			cout<<1<<endl;
		}else{
			cout<<cnt<<endl;
		}
	}

	return 0;
}
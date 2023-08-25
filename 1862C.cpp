#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long> arr(n+1),ans(n+1);                
		for (long long i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		if (arr[1]!=n)
		{
			cout<<"NO"<<endl;
			continue;
		}
		for (long long i = 1; i <= n; i++)
		{
			ans[arr[i]]++;
		}
		for (long long i = n-1;i>=1;i--) 
		{
			ans[i]+=ans[i+1];
		}
		if (ans==arr )
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
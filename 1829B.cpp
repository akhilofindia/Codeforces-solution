#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		long long count=0,ans=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==0)
			{
				count++;
			}
			else if (arr[i]==1)
			{
				ans=max(ans,count);
				count=0;
			}
		}
		cout<<max(ans,count)<<endl;
	}

	return 0;
}
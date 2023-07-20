#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		map<int,int>mp;
		for (int i = 1; i <= n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]=i;
		}
		int ans=-1;
		for (int i = 1; i <= 1000; i++)
		{
			for (int j = 1; j <= 1000; j++)
			{
				int z=__gcd(i,j);
				if (z==1 && mp[i] && mp[j])
				{
					ans=max(ans,mp[i]+mp[j]);
				}
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
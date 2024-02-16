#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n;cin>>n;
		ll arr[n];
		ll sum=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		ll cnt=0;
		ll flag=0;
		for (ll i = 0; i < n; i++)
		{
			if (arr[i]>sum/n)
			{
				cnt+=arr[i]-sum/n;
			}else if (arr[i]<sum/n)
			{
				if (cnt<(sum/n-arr[i]))
				{
					flag=1;
					break;
				}else{
					cnt-=(sum/n-arr[i]);
				}
			}
		}
		if (flag)
		{
			cn;
		}else cy;

	}

	return 0;
}
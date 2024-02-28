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
		ll sum=0;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		ll flag=0;
		for (ll i = 0; i < n; i++)
		{
			if ((sum-arr[i])%3==0)
			{
				flag=1;
				break;
			}
		}
		if (sum%3==0)
		{
			cout<<0<<endl;
		}else if (sum%3==2 || flag==1)
		{
			cout<<1<<endl;
		}else cout<<2<<endl;
	}

	return 0;
}
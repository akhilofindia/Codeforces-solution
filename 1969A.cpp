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
		map<ll,ll>mp;
		ll cnt=0;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]=i+1;
			if (mp[i+1]==arr[i])
			{
				cnt=1;
			}
		}
		
		if (cnt==1)
		{
			cout<<2<<endl;
		}else cout<<3<<endl;

	}

	return 0;
}
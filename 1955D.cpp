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
		ll x,y,z;
		cin>>x>>y>>z;
		ll arr[x],brr[y];
		map<ll,ll>mp1,mp2;
		for (ll i = 0; i < x; i++)
		{
			cin>>arr[i];
		}
		for (ll i = 0; i < y; i++)
		{
			cin>>brr[i];
			mp1[brr[i]]++;
		}
		for (ll i = 0; i < y; i++)
		{
			mp2[arr[i]]++;
		}
		ll cnt=0;
		ll mc=0;
		for (auto i: mp1)
		{
			ll ans=i.first;
			if (mp2.find(ans)!=mp2.end())
			{
				mc+=min(i.second,mp2[ans]);
			}
		}
		// cout<<mc<<endl;
		if (mc>=z)
		{
			cnt++;
		}
		if(x!=y){
			ll i=0,j=y;
			while(j<x)
			{
				if (arr[i]!=arr[y+i])
				{
					mc-=min(mp2[arr[i+y]],mp1[arr[i+y]]);
					mc-=min(mp2[arr[i]],mp1[arr[i]]);
					mp2[arr[i+y]]++;
					mp2[arr[i]]--;
					mc+=min(mp2[arr[i+y]],mp1[arr[i+y]]);
					mc+=min(mp2[arr[i]],mp1[arr[i]]);
				}
				if (mc>=z)
				{
					cnt++;
				}
				i++;
				j++;
			}
		}
		cout<<cnt<<endl;

	}

	return 0;
}
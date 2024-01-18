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
		ll n; cin>>n;
		vector<ll>arr(n);
		map<ll,ll>mp;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		ll ans=0;
		ll cnt=0;
		for (auto it: mp)
		{
			ll x=it.second;
			if (it.second>=2)
			{
				cnt+=(x*(x-1))/2*ans;
			}
			if (x>=3)
			{
				cnt+=((x*(x-1)*(x-2)))/6;
			}
			ans+=x;
		}
		cout<<cnt<<endl;
		
	}

	return 0;
}
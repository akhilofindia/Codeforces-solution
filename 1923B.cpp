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
		ll n,k;cin>>n>>k;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll x[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>x[i];
		}
		ll mx=0;
		ll flag=0;
		vector<pair<ll,ll>>v;
		for (int i = 0; i < n; i++)
		{
			v.push_back({abs(x[i]),arr[i]});
		}
		sort(v.begin(),v.end());
		for (ll i = 0; i < v.size(); i++)
		{
			mx+=v[i].second;
			ll ans=mx/k;
			if (mx%k!=0)
			{
				ans++;
			}
			if (ans>v[i].first)
			{
				flag=1;
				break;
			}
		}
		if (flag)
		{
			cn;
		}else cy;
	}

	return 0;
}
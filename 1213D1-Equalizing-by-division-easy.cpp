#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n,k; cin>>n>>k;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	map<ll,vector<ll>>mp;
	//number of steps to reach every possible num
	for (ll i = 0; i < n; i++)          
	{
		ll cnt=0;
		while(arr[i]){
			mp[arr[i]].push_back(cnt);
			arr[i]/=2;
			cnt++;
		}
		mp[0].push_back(cnt);
	}
	ll mn=INT_MAX;
	for (auto i: mp)
	{
		vector<ll>v=i.second;
		// cout<<i.first<<"-> ";
		// for (ll i = 0; i < v.size(); i++)
		// {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;
		if (v.size()>=k)
		{
			ll ans=0;
			sort(v.begin(),v.end());
			for (ll i = 0; i < k; i++)
			{
				ans+=v[i];
			}
			mn=min(mn,ans);
		}
	}
	cout<<mn<<endl;
	

	return 0;
}
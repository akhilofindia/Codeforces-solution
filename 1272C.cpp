#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n,k; cin>>n>>k;
	string s; cin>>s;
	char arr[k];
	map<char,ll>mp;
	for (ll i = 0; i < k; i++)
	{
		cin>>arr[i];
		mp[arr[i]]=1;
	}
	ll cnt=0;
	ll ans=0;
	for (ll i = 0; i < n; i++)
	{
		if (mp[s[i]])
		{
			cnt++;
		}else{
			ans+=(cnt*(cnt+1))/2;
			cnt=0;
		}
	}
	ans+=(cnt*(cnt+1))/2;
	cout<<ans<<endl;

	return 0;
}
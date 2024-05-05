#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	ll a[n],b[n];
	for (ll i = 0; i < n; i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	ll pre[n];
	pre[0]=a[0];
	for (ll i = 1; i < n; ++i)
	{
		pre[i]=pre[i-1]+a[i];
	}
	ll mx=0;
	for (ll i = 0; i < n; i++)
	{
		ll sum=pre[n-1]-a[i];
		mx=max(mx,sum+b[i]);
	}
	cout<<mx<<endl;

	return 0;
}
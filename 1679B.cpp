#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n,q; cin>>n>>q;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	while(q--){
		ll a; cin>>a;
		if (a==1)
		{
			ll b,c; cin>>b>>c;
			for (ll i = 0; i < n; i++)
			{
				if (i==b-1)
				{
					arr[i]=c;
				}
			}
			ll sum=0;
			for (ll i = 0; i < n; i++)
			{
				sum+=arr[i];
			}
			cout<<sum<<endl;
		}else if (a==2)
		{
			ll x; cin>>x;
			for (ll i = 0; i < n; i++)x
			{
				arr[i]=x;
			}
			ll sum=0;
			for (ll i = 0; i < n; i++)
			{
				sum+=arr[i];
			}
			cout<<sum<<endl;
		}
	}

	return 0;
}
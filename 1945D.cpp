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
		ll n,m;cin>>n>>m;
		ll a[n],b[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		ll sum=0;
		ll ans=LLONG_MAX;
		for (ll i = n-1; i>=0; i--)
		{
			if (i+1<=m)
			{
				ans=min(ans,sum+a[i]);
			}
			sum+=min(a[i],b[i]);
		}
		cout<<ans<<endl;
	}

	return 0;
}
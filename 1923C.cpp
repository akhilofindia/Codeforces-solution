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
		ll n,q;cin>>n>>q;
		ll arr[n+1];
		vector<ll>v(n+1),pre(n+1);
		ll cnt=0;
		for (ll i = 1; i <= n; i++)
		{
			cin>>arr[i];
			pre[i]=pre[i-1]+arr[i];
			if (arr[i]==1)
			{
				v[i]=v[i-1]+2;
			}else{
				v[i]=v[i-1]+1;
			}
		}
		while(q--){
			ll l,r; cin>>l>>r;
			ll ans;
			if (l==0)
			{
				ans=pre[r];
			}else{
				ans=pre[r]-pre[l];
			}
			// ll s2=v[r-l];
			if (l==r)
			{
				cn;
			}else if (pre[r]-pre[l-1]<v[r]-v[l-1])
			{
				cn;
			}else cy;
		}
	}

	return 0;
}
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
		vector<ll>v(n);
		set<ll>st;
		for (ll i = 0; i < n; i++)
		{
			cin>>v[i];
			st.insert(v[i]);
		}
		vector<int>vi;
		for (auto i: st)
		{
			vi.push_back(i);
		}
		ll mx=1;
		for (ll i = 0; i < vi.size(); i++)
		{
			ll x=vi[i]+n-1;
			ll ok=0;
			ll k = upper_bound(vi.begin(),vi.end(),x)-vi.begin()-i;
			mx=max(k,mx);
		}
		cout<<mx<<endl;
	}

	return 0;
}
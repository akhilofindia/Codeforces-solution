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
		ll a[n],b[n];
		vector<pair<ll,ll>>vi,vi2;
		ll c[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>a[i];
			c[i]=a[i];
			vi.push_back(make_pair(a[i],i));
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		sort(vi.begin(),vi.end());
		sort(c,c+n);
		vector<ll>bb;
		for (ll i = 0; i < n; i++)
		{
			ll z=vi[i].second;
			bb.push_back(b[z]);
		}
		for (ll i = 0; i < n; i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<endl;
		for (ll i = 0; i < bb.size(); i++)
		{
			cout<<bb[i]<<" ";
		}
		cout<<endl;
		
	}

	return 0;
}
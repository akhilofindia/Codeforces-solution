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
		ll n,m,k; cin>>n>>m>>k;
		ll arr[n];
		vector<pair<ll,ll>>v;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			v.push_back(make_pair(arr[i],i));
		}
		sort(v.begin(),v.end());
		vector<ll>vi(n,0);
		for (ll i = 0; i < v.size(); i++)
		{
			ll ticketstobebought=min(m,k);
			vi[v[i].second]=ticketstobebought;
			k-=ticketstobebought;
			if (k<=0)
			{
				break;
			}
		}
		ll cost=0;
		// for (ll i = 0; i < vi.size(); i++)
		// {
		// 	cout<<vi[i]<<" ";
		// }
		// cout<<endl;
		ll priceinc=0;
		for (ll i = 0; i < n; i++)
		{
			cost+=(vi[i]*(arr[i]+priceinc));
			priceinc+=vi[i];
		}
		cout<<cost<<endl;
	}
	return 0;
}
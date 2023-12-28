#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n; cin>>n;
		ll a[n],b[n],c[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin>>c[i];
		}
		vector<pair<ll,ll>>aa,bb,cc;
		for (ll i = 0; i < n; i++)
		{
			aa.push_back({a[i],i});
			bb.push_back({b[i],i});
			cc.push_back({c[i],i});
		}
		ll ans=0;
		sort(aa.begin(),aa.end());
		sort(bb.begin(),bb.end());
		sort(cc.begin(),cc.end());
		vector<pair<ll,ll>>vi;
		vi.push_back({aa[n-1].first,aa[n-1].second});
		vi.push_back({aa[n-2].first,aa[n-2].second});
		vi.push_back({aa[n-3].first,aa[n-3].second});
		vi.push_back({bb[n-1].first,bb[n-1].second});
		vi.push_back({bb[n-2].first,bb[n-2].second});
		vi.push_back({bb[n-3].first,bb[n-3].second});
		vi.push_back({cc[n-1].first,cc[n-1].second});
		vi.push_back({cc[n-2].first,cc[n-2].second});
		vi.push_back({cc[n-3].first,cc[n-3].second});
		// for (ll i = 0; i < vi.size(); i++)
		// {
		// 	cout<<vi[i].first<<" "<<vi[i].second<<endl;
		// }
		
		for (ll i = 0; i < 3; i++)
		{
			for (ll j = 3; j < 6; j++)
			{
				for (ll k = 6; k < 9; k++)
				{
					if(vi[i].second!=vi[j].second && vi[j].second!=vi[k].second && vi[i].second!=vi[k].second){
						ans=max(ans,vi[i].first+vi[j].first+vi[k].first);
					}
				}
			}
		}
		cout<<ans<<endl;


	}

	return 0;
}
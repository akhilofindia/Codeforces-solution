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
		ll n;cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		set<ll>st;
		for (int i = 0; i < n; i++)
		{
			st.insert(i);
		}
		for (ll i = 0; i < n-1; i++)
		{
			auto it=st.begin();
			ll mexx=*it;
			st.erase(it);
			if (arr[i]==(*st.begin())-mexx)
			{
				// v.push_back(mexx);
				cout<<mexx<<" ";
			}else{
				ll ans=(*it)-arr[i];
				// v.push_back(ans);
				cout<<ans<<" ";
				st.erase(ans);
				st.insert(mexx);
			}
		}
		// for (ll i = 0; i < v.size(); i++)
		// {
		// 	cout<<v[i]<<" ";
		// }
		cout<<(*st.begin())<<endl;
	}

	return 0;
}
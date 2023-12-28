#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		ll n; cin>>n;
		ll arr[n];
		ll ans;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll cnt=1;
		while(n){
			set<ll>st;
			for (ll i = 0; i < n; i++)
			{
				ll x=arr[i]%cnt;
				st.insert(x);
			}
			if (st.size()==2)
			{	
				ans=cnt; 
				break;
			}else{
				cnt*=2;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
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
		ll x,n; cin>>x>>n;
		set<ll>st;
		for (ll i = 1; i*i <= x; i++)
		{
			if (x%i==0)
			{
				st.insert(x/i);
				st.insert(i);
			}
		}
		auto i=st.lower_bound(x/n);
		if (*i<=x/n)
		{
			cout<<*i<<endl;
			cout<<0;
		}else{
			i--;
			cout<<*i<<endl;
			cout<<1;
		}
	}

	return 0;
}
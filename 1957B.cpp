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
		ll n,k; cin>>n>>k;
		vector<ll>v;
		if (n==1)
		{
			v.push_back(k);
		}else{
			ll cnt=0;
			ll ans=(1<<(ll)log2(k));
			if (k==ans-1)
			{
				v.push_back(k);
			}else{
				v.push_back(ans-1);
				cnt=k-(ans-1);
			}
			for (ll i = 0; i < n-1; i++)
			{
				v.push_back(cnt);
				cnt=0;
			}
		}
		for (ll i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;

	}

	return 0;
}
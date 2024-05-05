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
		ll n,m; cin>>n>>m;
		string a,b; cin>>a>>b;
		ll ans=0;
		ll cnt=0;
		for (ll i=0; i<b.size();i++)
		{
			if (cnt<a.size() && a[cnt]==b[i])
			{
				ans++;
				cnt++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
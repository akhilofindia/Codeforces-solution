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
		ll m,n;
		ll x,y;
		cin>>m>>n;
		for (ll i = 0; i < 3; i++)
		{
			ll a,b; cin>>a>>b;
			if (a==m)
			{
				y=b;
			}
		}
		// cout<<y<<endl;
		// cout<<n<<endl;
		ll ans=(abs(y-n));
		// cout<<ans<<endl;
		cout<<ans*ans<<endl;

	}

	return 0;
}
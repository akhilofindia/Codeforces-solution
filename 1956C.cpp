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
		ll ans=0;
		ll cnt=(n*(n+1))/2;
		vector<vector<int>>vi(n,vector<int>(n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				vi[i][j]=n-j;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				ans+=vi[i][j];
			}
		}
		cout<<ans<<" "<<2*n<<endl;
		for (ll i = 1; i <= n; i++)
		{
			cout<<1<<" "<<i<<" ";
			for (ll j = 1; j <= n; j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
		for (ll i = 1; 2*i <= n; i++)
		{
			cout<<2<<" "<<i<<" ";
			for (ll j = 1; j <= n; j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}
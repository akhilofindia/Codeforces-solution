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
		ll a,b,c,d; cin>>a>>b>>c>>d;
		ll arr[a];
		for (ll i = 0; i < a; i++)
		{
			cin>>arr[i];
		}
		ll charge=0;
		ll pre=0;
		for (ll i = 0; i < a; i++)
		{
			ll x=abs(arr[i]-pre)*c;
			if (x>d)
			{
				charge+=d;
			}else{
				charge+=x;
			}
			pre=arr[i];
		}
		if (charge<b)
		{
			cy;
		}else{
			cn;
		}
	}

	return 0;
}
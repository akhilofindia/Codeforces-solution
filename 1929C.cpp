#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll tc; cin>>tc;
	while(tc--){
		ll k,x,a; cin>>k>>x>>a;
		ll cnt=0;
		for (ll i = 0; i < x; i++)
		{
			ll bet_money=(cnt+k-1)/(k-1);
			cnt+=bet_money;
			if (a<cnt)
			{
				break;
			}
		}
		ll winnings=k*(a-cnt);
		if (winnings>a)
		{
			cy;
		}else cn;
	}

	return 0;
}
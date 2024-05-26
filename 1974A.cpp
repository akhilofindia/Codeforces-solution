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
		ll x,y; cin>>x>>y;
		ll r=5,c=3;
		ll cells=r*c;
		ll ok=4;
		ll mx=(r/2)*(c/2);
		ll an=(y+mx-1)/mx;
		ll cnt=y*ok;
		ll rem=an*cells-cnt;
		ll remm=x-rem;
		ll ans;
		if (remm>0)
		{
			ans=(remm+cells-1)/cells;
		}else{
			ans=0;
		}
		cout<<ans+an<<endl;
	}

	return 0;
}
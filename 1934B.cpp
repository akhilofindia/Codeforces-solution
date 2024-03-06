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
		vector<ll>arr={1,2,1,2,3,1,2,3,2,1,2,2,2,3,1};
		ll cnt=n/15;
		ll ok=cnt*15;
		// cout<<cnt<<" "<<ok<<endl;
		ll ans=INT_MAX;
		if (n-ok!=0)
		{
			ans=min(ans,arr[n-ok-1]+cnt);
		}else{
			ans=cnt;
		}
		// cout<<ans<<endl;
		// cout<<ok<<endl;
		for (ll i = 0; i < 3; i++)
		{
			ok-=5;
			ll left=n-ok;
			if (ok>=0 && left<=15)
			{
				ans=min(ans,arr[left-1]+cnt);
			}else{
				break;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
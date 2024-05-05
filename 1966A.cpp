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
		ll n,k;cin>>n>>k;
		ll arr[n];
		map<ll,ll>mp;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		ll cnt=0;
		ll mx=0;
		ll extra=0;
		for(auto it: mp){
			if (it.second>=k)
			{
				cnt=1;
				break;
			}
		}
		if (cnt==0)
		{
			cout<<n<<endl;
		}else{
			cout<<k-1<<endl;
		}
	}

	return 0;
}
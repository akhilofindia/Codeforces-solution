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
		ll cnt=0;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		map<ll,ll>mp;
		mp[0]=1;
		for (ll i = 0; i < n; i++)
		{
			if ((i+1)%2==0)
			{
				cnt+=arr[i];
			}else{
				cnt-=arr[i];
			}
			mp[cnt]++;
			// cout<<cnt<<endl;
		}
		bool flag=false;
		for(auto it: mp){
			if (it.second>1)
			{
				flag=true;
				break;
			}
		}
		if (flag)
		{
			cy;
		}else{
			cn;
		}
	}

	return 0;
}
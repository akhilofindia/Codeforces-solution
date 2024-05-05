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
		ll arr[n];
		set<ll>st;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			st.insert(arr[i]);
		}
		if (st.size()==1)
		{
			cout<<-1<<endl;
		}else{
			ll j=0;
			ll cnt=LLONG_MAX;
			for (ll i = 0; i < n; i++)
			{
				// cout<<j<<" ";
				if (arr[i]==arr[n-1])
				{
					j++;
				}else{
					cnt=min(cnt,j);
					j=0;
				}
			}
			cnt=min({cnt,j,n});
			cout<<cnt<<endl;

		}
	}

	return 0;
}
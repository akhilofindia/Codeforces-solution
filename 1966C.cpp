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
		ll mx=0;
		ll sum=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			mx=max(mx,arr[i]);
			sum+=arr[i];
		}
		if (sum%2==0)
		{
			if (n%2==0)
			{
				cout<<"Bob"<<endl;
			}else cout<<"Alice"<<endl;
		}else{
			if (n%2==1 || mx%2==1)
			{
				cout<<"Alice"<<endl;
			}else cout<<"Bob"<<endl;
		}
	}

	return 0;
}
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
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll cnt=0;
		for (ll i = 0; i < n-1; i++)
		{
			if (arr[i+1]<arr[i])
			{
				cnt++;
			}
		}
		if (cnt==0)
		{
			cy;
		}else if (arr[0]<arr[n-1])
		{
			cn;
		}else{
			if (cnt==1)
			{
				cy;
			}else cn;
		}

	}

	return 0;
}
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
		ll final=arr[0];
		for (ll i = 1; i < n; i++)
		{
			if (arr[i]>final)
			{
				final=arr[i];
			}else{
				ll cnt=final/arr[i];
				if (final>=cnt*arr[i])
				{
					final=(cnt+1)*arr[i];
				}else{
					final=cnt*arr[i];
				}
			}
		}
		cout<<final<<endl;
	}

	return 0;
}
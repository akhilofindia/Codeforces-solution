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
		ll n,f,k; cin>>n>>f>>k;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll fav=arr[f-1];
		sort(arr,arr+n);
		reverse(arr,arr+n);
		ll ind;
		for (ll i = 0; i < n; i++)
		{
			if (arr[i]==fav)
			{
				ind=i+1;
			}
		}
		if (k>=ind)
		{
			cy;
		}else{
			if (arr[k-1]==arr[ind-1])
			{
				cout<<"MAYBE"<<endl;
			}else cn;
		}
	}

	return 0;
}
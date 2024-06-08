#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n,k;cin>>n>>k;
	ll cnt=0;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	ll mx=arr[0];
	for (ll i = 1; i < n; i++)
	{
		if (arr[i]>mx)
		{
			mx=arr[i];
			cnt=1;
		}else{
			cnt++;
		}
		if (cnt==k)
		{
			break;
		}
	}
	cout<<mx<<endl;

	return 0;
}
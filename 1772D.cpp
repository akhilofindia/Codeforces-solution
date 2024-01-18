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
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll x=0;
		for (ll i = 0; i < n-1; i++)
		{
			if (arr[i]>arr[i+1])
			{
				ll cnt=(arr[i]+arr[i+1]+1)/2;
				x=max(x,cnt);
			}
		}
		for (ll i = 0; i < n; i++)
		{
			arr[i]=abs(arr[i]-x);
		}
		ll flag=0;
		for (ll i = 0; i < n-1; i++)
		{
			if (arr[i+1]<arr[i])
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			cout<<-1<<endl;
		}else{
			cout<<x<<endl;
		}
	}

	return 0;
}
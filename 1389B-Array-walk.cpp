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
		ll n,k,z;
		cin>>n>>k>>z;
		ll arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll pre[n];
		pre[0]=arr[0];
		for (ll i = 1; i < n; i++)
		{
			pre[i]=arr[i]+pre[i-1];
		}
		ll ok[n-1];
		ok[0]=arr[0]+arr[1];
		for (ll i = 1; i < n-1; i++)
		{
			ok[i]=max(ok[i-1],arr[i]+arr[i+1]);
		}
		ll cnt=k;
		ll mx=0;
		for (ll i = 0; i <= z; i++)
		{
			if (i>cnt)
			{
				break;
			}
			mx=max(mx,pre[k-2*i]+i*ok[k-2*i]);
			cnt--;
		}
		cout<<mx<<endl;
	}

	return 0;
}
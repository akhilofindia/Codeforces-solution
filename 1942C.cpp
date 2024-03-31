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
		ll n,x,y; cin>>n>>x>>y;
		ll arr[x];
		for (ll i = 0; i < x; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+x);
		ll cnt=0;
		for (ll i = 0; i < x-1; i++)
		{
			if (arr[i+1]-2==arr[i])
			{
				cnt++;
			}
		}
		if (((arr[x-1]+2)%n==arr[0]) && x>1)
		{
			cnt++;
		}
		cout<<cnt+x-2<<endl;
	}

	return 0;
}
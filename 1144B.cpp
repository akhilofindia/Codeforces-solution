#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	ll arr[n];
	vector<ll>odd,eve;
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
		if (arr[i]%2==1)
		{
			odd.push_back(arr[i]);
		}else{
			eve.push_back(arr[i]);
		}
	}
	sort(odd.begin(),odd.end());
	sort(eve.begin(),eve.end());
	ll sum=0;
	ll x=odd.size();
	ll y=eve.size();
	if (abs(x-y)<2)
	{
		sum=0;
	}else if (x>y)
	{
		for (ll i = 0; i < x-y-1; i++)
		{
			sum+=odd[i];
		}
	}else{
		for (ll i = 0; i < y-x-1; i++)
		{
			sum+=eve[i];
		}
	}
	cout<<sum<<endl;


	return 0;
}
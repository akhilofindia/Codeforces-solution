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
		vector<ll>b;
		for (ll i = 0; i < n; i++)
		{
			b.push_back(arr[i]+i+1);
		}
		sort(b.begin(),b.end(),greater<ll>());
		for (ll i = 1; i < b.size(); i++)
		{
			if (b[i]==b[i-1])
			{
				b[i]--;
			}else if (b[i]>b[i-1])
			{
				b[i]=b[i-1]-1;
			}
		}
		for (ll i = 0; i < b.size(); i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;

	}

	return 0;
}
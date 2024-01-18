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
		ll odd=0;
		if (n==1)
		{
			cout<<arr[0]<<endl;
		}else{
			ll sum=arr[0];
			cout<<arr[0]<<" ";
			ll odd=arr[0]%2;
			for (ll i = 1; i < n; i++)
			{
				sum+=arr[i];
				if (arr[i]%2==1)
				{
					odd++;
				}
				if (odd%3==1)
				{
					cout<<sum-(odd/3+1)<<" ";
				}else{
					cout<<sum-(odd/3)<<" ";
				}
			}
			cout<<endl;
		}
	}

	return 0;
}
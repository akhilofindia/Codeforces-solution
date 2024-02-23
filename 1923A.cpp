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
		ll first,last;
		ll flag=0;
		ll ones=0;
		for (ll i = 0; i < n; i++)
		{
			if (arr[i]==1 && flag==0)
			{
				first=i;
				flag=1;
			}
			if (arr[i]==1)
			{
				ones++;
				last=i;
			}
		}
		ll cnt=0;
		for (ll i = first; i < last; i++)
		{
			if (arr[i]==0)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
		// cout<<cnt<<endl;
	}

	return 0;
}
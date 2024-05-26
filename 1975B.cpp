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
		sort(arr,arr+n);
		ll flag=0;
		ll cnt1=arr[0];
		ll cnt2;
		ll ind;
		for (ll i = 1; i < n; i++)
		{
			if (arr[i]%cnt1!=0)
			{
				cnt2=arr[i];
				ind=i;
				break;
			}
		}
		for (ll i = 1; i < n; i++)
		{
			if (i==ind)
			{
				continue;
			}
			if (arr[i]%cnt1==0 || arr[i]%cnt2==0)
			{
				/* code */
			}else{
				flag=1;
				break;
			}
		}
		if (flag)
		{
			cn;
		}else cy;

	}

	return 0;
}
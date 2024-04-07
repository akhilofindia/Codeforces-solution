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
		ll n,k; cin>>n>>k;
		ll arr[n];
		k--;
		ll ind=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (ll i = 0; i < n; i++)
		{
			if (arr[i]>=arr[k])
			{
				ind=i;
				break;
			}
		}
		if (ind==k)
		{
			ind=0;
		}
		swap(arr[k],arr[ind]);
		ll cnt=0;
		for (ll i = ind; i < n-1; i++)
		{
			if (arr[i]>arr[i+1])
			{
				cnt++;
				arr[i+1]=arr[i];
			}else{
				break;
			}
		}
		if (ind!=0)
		{
			cnt++;
		}
		cout<<max(cnt,ind-1)<<endl;
	}

	return 0;
}
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
		ll arr[2*n];
		for (ll i = 0; i < 2*n; i++)
		{
			cin>>arr[i];
		}
		ll score=0;
		sort(arr,arr+2*n);
		for (ll i = 0; i < 2*n; i+=2)
		{
			score+=min(arr[i],arr[i+1]);
		}
		cout<<score<<endl;
	}

	return 0;
}
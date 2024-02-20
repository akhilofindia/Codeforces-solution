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
		ll mod=1000000007;
		ll n,m; cin>>n>>m;
		ll arr[n];
		ll prod=1;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			prod*=arr[i]%mod;
			prod=prod%mod;
		}
		string s; cin>>s;
		ll left=0,right=n-1;
		cout<<prod%m<<" ";
		for (ll i = 0; i < s.size()-1; i++)
		{
			if (s[i]=='L')
			{
				prod/=arr[left];
				left++;
			}else if (s[i]=='R')
			{
				prod/=arr[right];
				right--;
			}
			cout<<prod%m<<" ";
		}
		cout<<endl;
	}

	return 0;
}
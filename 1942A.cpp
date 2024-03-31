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
		ll n,k;cin>>n>>k;
		if (k==1)
		{
			for (ll i = 1; i <= n; i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}else if (k==n)
		{
			for (ll i = 0; i < n; i++)
			{
				cout<<1<<" ";
			}
			cout<<endl;
		}else{
			cout<<-1<<endl;
		}
	}

	return 0;
}
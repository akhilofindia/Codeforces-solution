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
		for (ll i = 0; i < 2*n; i++)
		{
			for (ll j = 0; j < 2*n; j++)
			{
				if ((i/2 + j/2) % 2 == 0)
				{
					cout<<'#';
				}else cout<<'.';
			}
			cout<<endl;
		}
	}

	return 0;
}
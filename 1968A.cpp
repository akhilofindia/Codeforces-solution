#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n; cin>>n;
		ll mx=0;
		ll mi=0;
		for (ll i = 1; i < n; i++)
		{
			ll sum=gcd(n,i)+i;
			if (sum>mx)
			{
				mx=sum;
				mi=i;
			}
		}
		cout<<mi<<endl;
	}

	return 0;
}
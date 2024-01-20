#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	ll ans=1,ans2=n;
	ll cnt=n;
	for (ll i = 1; i <= sqrt(n); i++)
	{
		if (n%i==0)
		{
			if(__gcd(i,n/i)==1 && cnt>min(i,n/i)){
                cnt=n/i;
                ans=i;
                ans2=n/i;
            }
		}
	}
	cout<<ans<<" "<<ans2<<endl;

	return 0;
}
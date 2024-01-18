#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		ll n; cin>>n;
		ll mx=INT_MAX;
		ll mn=INT_MIN;
		vector<ll>v;
		while(n--){
			ll a,b ; cin>>a>>b;
			if (a==1)
			{
				mn=max(mn,b);
			}else if (a==2)
			{
				mx=min(mx,b);
			}else{
				v.push_back(b);
			}
		}
		ll cnt=mx-mn+1;
		// cout<<mx<<" "<<mn<<endl;
		for (ll i = 0; i < v.size(); i++)
		{
			if (v[i]<=mx && v[i]>=mn)
			{
				cnt--;
			}
		}
		if (cnt<0)
		{
			cout<<0<<endl;
		}else
			cout<<cnt<<endl;
	}

	return 0;
}
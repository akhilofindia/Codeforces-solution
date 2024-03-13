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
		string str;cin>>str;
		ll cntp=0,cntm=0,cntk=0;
		for (ll i = 0; i < n-2; i++)
		{
			if (str.substr(i,5)=="mapie")
			{
				cntp++;
			}
			if (str.substr(i,3)=="map")
			{
				cntm++;
			}
			if (str.substr(i,3)=="pie")
			{
				cntk++;
			}
		}
		ll ans=cntk+cntm-cntp;
		cout<<ans<<endl;
	}

	return 0;
}
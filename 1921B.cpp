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
		string s1,s2; cin>>s1>>s2;
		ll cnt=0,ans=0;
		for (ll i = 0; i < n; i++)
		{
			if (s1[i]=='0' && s1[i]!=s2[i])
			{
				cnt++;
			}
			if (s2[i]=='0' && s1[i]!=s2[i])
			{
				ans++;
			}
		}
		cout<<max(cnt,ans)<<endl;
	}

	return 0;
}
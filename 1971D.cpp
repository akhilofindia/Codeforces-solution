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
		string s; cin>>s;
		ll haha=0;
		for (ll i = 1; i < s.size(); i++)
		{
			if (s[i-1]>s[i])
			{
				haha=1;
				break;
			}
		}
		if (haha==0)
		{
			cout<<1<<endl;
		}else{
			ll cnt=0;
			ll ans=1;
			for (ll i = 1; i < s.size(); i++)
			{
				if (s[i-1]!=s[i])
				{
					if (s[i-1]=='0' && s[i]=='1')
					{
						cnt=1;
					}
					ans++;
				}
			}
			cout<<ans-cnt<<endl;
		}
	}

	return 0;
}
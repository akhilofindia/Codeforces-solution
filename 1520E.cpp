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
		string s; cin>>s;
		ll cnt=0;
		for (ll i = 0; i < n; i++)
		{
			if (s[i]=='*')
			{
				cnt++;
			}
		}
		cnt=(cnt+1)/2;        //middle sheep
		ll z=0;
		ll mid=0;
		for (ll i = 0; i < n; i++)
		{
			if (s[i]=='*')
			{
				z++;
				if (z==cnt)
				{
					mid=i;
					break;
				}
			}
		}
		ll left=0;
		ll right=0;
		ll ans=0;
		for (ll i = mid;i>=0 ;i--)
		{
			if (s[i]=='.')
			{
				left++;
			}else{
				ans+=left;
			}
		}
		for (ll i = mid; i < n; i++)
		{
			if (s[i]=='.')
			{
				right++;
			}else{
				ans+=right;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
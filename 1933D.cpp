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
		vector<ll>arr(n);
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		ll mn=*min_element(arr.begin(),arr.end());
		ll cnt=0;
		for (ll i = 0; i < n; i++)
		{
			if (arr[i]==mn)
			{
				cnt++;
			}
		}
		if (n==1)
		{
			cn;
		}else if (cnt==1)
		{
			cy;
		}else{
			ll flag=0;
			for (ll i = 1; i < n; i++)
			{
				if (arr[i]%arr[0]!=0)
				{
					flag=1;
					break;
				}
			}
			if (flag)
			{
				cy;
			}else cn;
		}
	}

	return 0;
}
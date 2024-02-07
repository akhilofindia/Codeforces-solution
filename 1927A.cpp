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
		long long n; cin>>n;
		string s; cin>>s;
		long long k=0,l=0;
		map<char,ll>mp;
		for (ll i = 0; i < n; i++)
		{
			mp[s[i]]++;
		}
		if (mp['B']==0)
		{
			cout<<0<<endl;
		}else if (mp['B']==1)
		{
			cout<<1<<endl;
		}else{
			for (long long i = 0; i < n; i++)
			{
				if (s[i]=='B')
				{
					k=i;
					break;
				}
			}
			for (long long i = n-1; i >= 0; i--)
			{
				if (s[i]=='B')
				{
					l=i;
					break;
				}
			}
			cout<<l-k+1<<endl;
		}
	}

	return 0;
}
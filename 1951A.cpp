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
		string s; cin>>s;
		ll cnt=0;
		vector<int>v;
		for (ll i = 0; i < n; i++)
		{
			if (s[i]=='1')
			{
				v.push_back(i);
			}
		}
		if (v.size()%2==1)
		{
			cn;
		}else if(v.size()==2 && v[0]+1==v[1]){
			cn;
		}else cy;
	}

	return 0;
}
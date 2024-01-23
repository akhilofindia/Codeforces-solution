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
		ll sum=0;
		ll cur=0;
		for (ll i = 0; i < s.size(); i++)
		{
			if (s[i]=='-')
			{
				cur--;
			}else{
				cur++;
			}
			if (cur<0)
			{
				sum+=i+1;
				cur=0;
			}
		}
		cout<<sum+s.size()<<endl;
	}

	return 0;
}
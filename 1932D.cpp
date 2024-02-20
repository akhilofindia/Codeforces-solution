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
		char c;cin>>c;
		map<char,vector<string>>mp;
		vector<char>v;
		for (ll i = 0; i < 2*n; i++)
		{
			string s;cin>>s;
			mp[s[1]].push_back(s);
		}
		v.push_back('C');
		v.push_back('D');
		v.push_back('H');
		v.push_back('S');
		vector<pair<string,string>>ans;
		for (char suit: v)
		{
			sort(mp[suit].begin(),mp[suit].end());
		}
		ll cnt=0;
		ll cntodd=0;
		for (ll i = 0; i < v.size(); i++)
		{
			if (mp[v[i]].size()%2==1 && v[i]!=c )
			{
				cntodd++;      //odd number cards
			}
		}
		ll flag=0;
		if (mp[c].size()%2!=cntodd%2 || cntodd>mp[c].size())
		{
			flag=1;
		}
		if (flag==0)
		{
			for (auto i: v)
			{
				if (i!=c && mp[i].size()%2==1)
				{
					cout<<mp[i].back()<<" "<<mp[c].back()<<endl;
					mp[i].pop_back();
					mp[c].pop_back();
				}
			}
			for (char i: v)
			{
				ll j=0;
				while(j<mp[i].size()){
					cout<<mp[i][j]<<" "<<mp[i][j+1]<<endl;
					j+=2;
			    }
		    }
	    }else{
	    	cout<<"IMPOSSIBLE"<<endl;
	    }
	}

	return 0;
}
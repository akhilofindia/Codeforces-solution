#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s; cin>>s;
		set<char>st;
		int ans=0;
		for (int i = 0; i < s.size(); i++)
		{
			st.insert(s[i]);
			if (st.size()==4)
			{
				ans++;
				st.clear();
				st.insert(s[i]);
			}
		}
		ans++;
		cout<<ans<<endl;
	}

	return 0;
}
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
		set<char>st;
		for (int i = 0; i < s.size(); i++)
		{
			st.insert(s[i]);
		}
		if (st.size()==1)
		{
			cn;
		}else{
			for (int i = 1; i < s.size(); ++i)
			{
				if (s[0]!=s[i])
				{
					swap(s[0],s[i]);
					break;
				}
			}
			cy;
			cout<<s<<endl;
		}
	}

	return 0;
}
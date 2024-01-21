#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	string s; cin>>s;
	int ans=0;
	stack<int>st;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i]=='(')
		{
			st.push(s[i]);
		}else{
			if (!st.empty())
			{
				st.pop();{
					ans++;
				}
			}
		}
	}
	cout<<ans*2<<endl;

	return 0;
}
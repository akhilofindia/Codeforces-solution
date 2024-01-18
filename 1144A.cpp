#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		string s; cin>>s;
		int flag=0;
		sort(s.begin(),s.end());
		string ans="abcdefghijklmnopqrstuvwxyz";
		for (int i = 0; i < s.size()-1; i++)
		{
			if (s[i]==s[i+1])
			{
				flag=1;
				break;
			}
		}
		if (ans.find(s)!=string::npos && !flag)
		{
			cy;
		}else cn;
	}

	return 0;
}
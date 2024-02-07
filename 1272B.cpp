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
		map<char,int>mp;
		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		int cnt=min(mp['L'],mp['R']);
		int ans=min(mp['U'],mp['D']);
		if (ans==0 && cnt!=0)
		{
			cnt=1;
		}else if (cnt==0 && ans!=0)
		{
			ans=1;
		}
		cout<<cnt*2+ans*2<<endl;
		for (int i = 0; i < ans; i++)
		{
			cout<<'U';
		}
		for (int i = 0; i < cnt; i++)
		{
			cout<<'R';
		}
		for (int i = 0; i < ans; i++)
		{
			cout<<'D';
		}
		for (int i = 0; i < cnt; i++)
		{
			cout<<'L';		
		}
		cout<<endl;
	}

	return 0;
}
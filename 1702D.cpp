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
		int k;cin>>k;
		int sum=0;
		string s1=s;
		sort(s1.begin(),s1.end());
		reverse(s1.begin(),s1.end());
		for (int i = 0; i < s.length(); i++)
		{
			sum+=(s[i]-'a' +1);
		}
		map<char,int>mp;
		for (int i = 0; i < s1.length(); i++)
		{
			if (sum>k)
			{
				mp[s1[i]]++;
				sum-=(s1[i]-'a'+1);
			}
		}
		for (int i = 0; i < s.length(); i++)
		{
			if (mp[s[i]]>0)
			{
				mp[s[i]]--;
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}

	return 0;
}
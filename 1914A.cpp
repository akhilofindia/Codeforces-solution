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
		int n;cin>>n;
		string s; cin>>s;
		map<char,int>mp;
		for (int i = 0; i < n; i++)
		{
			mp[s[i]]++;
		}
		int cnt=0;
		for (auto it: mp)
		{
			int ans=it.first- 65+1;
			if (it.second>=ans)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}
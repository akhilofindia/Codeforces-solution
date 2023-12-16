#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		string s; cin>>s;
		map<char,pair<int,int>>mp;
		for (int i = 0; i < n; i++)
		{
			char c=s[i];
			if (islower(c))
			{
				mp[c].first++;
			}else{
				mp[tolower(c)].second++;
			}
		}
		int ans=0,sum=0;
		for (int i = 0; i < mp.size(); i++)
		{
			ans+=min(mp[i].first,mp[i].second);
			sum+=abs(mp[i].first-mp[i].second)/2;
		}
		if (sum>=k)
		{
			cout<<ans+k<<endl;
		}else{
			cout<<ans+sum<<endl;
		}
	}

	return 0;
}
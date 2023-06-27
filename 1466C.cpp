#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		int ans=0;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i]==s[i-1])
			{
				s[i]='.';
				ans++;
			}
			if (s[i]==s[i-2] && s[i]!='.')
			{
				s[i]='.';
				ans++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
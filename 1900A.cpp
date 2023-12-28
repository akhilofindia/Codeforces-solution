#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s; cin>>s;
		int cnt=0;
		int ans=0;
		for (int i = 0; i < n; i++)
		{
			if (s[i]=='.')
			{
				ans++;
			}
		}
		for (int i = 0; i < n-2; i++)
		{
			if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
			{
				cnt=1;
				break;
			}
		}
		if (cnt==1)
		{
			cout<<2<<endl;
		}else{
			cout<<ans<<endl;
		}
	}

	return 0;
}
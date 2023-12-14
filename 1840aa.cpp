#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s;cin>>s;
		string ans;
		for (int i = 0; i < n; i++)
		{
			// ans+=s[i];
			for (int j = i+1; j < n; j++)
			{
				if (s[i]==s[j])
				{
					ans+=s[i];
					i=j;
					break;
				}
			}
		}
		cout<<ans<<endl;

	}

	return 0;
}
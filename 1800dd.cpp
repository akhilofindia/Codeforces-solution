#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s;cin>>s;
		int ans=0;
		for (int i = 1; i < n-1; i++)
		{
			if (s[i-1]==s[i+1])
			{
				ans++;
			}
		}
		cout<<n-1-ans<<endl;
	}

	return 0;
}
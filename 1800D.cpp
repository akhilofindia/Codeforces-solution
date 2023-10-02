#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s;cin>>s;
		int ans=0;
		for (int i = 0; i < n-2; i++)
		{
			if (s[i]==s[i+2])
			{
				ans++;
			}
		}
		cout<<n-ans-1<<endl;
	}

	return 0;
}
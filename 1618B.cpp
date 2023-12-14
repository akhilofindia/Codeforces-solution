#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string ans;
		string s;cin>>s;
		ans=s;
		string ak=s;
		for (int i = 1; i < n-2; i++)
		{
			string s1;cin>>s1;
			if (ak[1]==s1[0])
			{
				ans+=s1[1];
			}else{
				ans+=s1;
			}
			ak=s1;
		}
		if (ans.size()!=n)
		{
			ans+='a';
		}
		cout<<ans<<endl;
		
	}

	return 0;
}
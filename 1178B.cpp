#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	long long cnt=0,c=0,ans=0;
	for (long long i = 1; i < s.size(); i++)
	{
		if (s[i]=='v' && s[i-1]=='v')
		{
			ans+=c;
			cnt++;
		}else if (s[i]=='o')
		{
			c+=cnt;
		}
	}
	cout<<ans<<endl;

	return 0;
}
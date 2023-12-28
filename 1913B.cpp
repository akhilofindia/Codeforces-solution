#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		map<char,int>mp;
		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		int on=mp['1'];
		int ze=mp['0'];
		// cout<<on<<" "<<ze<<endl;
		int cnt=0;
		int zero=0,one=0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i]=='0')
			{
				s[i]='1';
				one++;
				if (one>on)
				{
					cnt=i+1;
					break;
				}
			}else{
				s[i]='0';
				zero++;
				if (zero>ze)
				{
					cnt=i+1;
					break;
				}
			}
		}
		if (cnt==0)
		{
			cout<<0<<endl;
		}else{
		    cout<<s.size()-cnt+1<<endl;
		}
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int one=0,zero=0;
		string s;
		cin>>s;
		for (int i = 0; i < n; i++)
		{
			if (s[i]=='0')
			{
				zero++;
			}else{
				break;
			}
		}
		for (int i = n-1;i>=0; i--)
		{
			if (s[i]=='1')
			{
				one++;
			}else{
				break;
			}
		}
		if (one+zero==n)
		{
			cout<<s<<endl;
		}else{
			string ans="";
			for (int i = 0; i < zero; i++)
			{
				ans+='0';
			}
			ans+='0';
			for (int i = 0; i < one; i++)
			{
				ans+='1';
			}
			cout<<ans<<endl;
		}
		

	}

	return 0;
}
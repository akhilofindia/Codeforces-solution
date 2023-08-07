#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		reverse(s.begin(),s.end());
		s+='0';
		for (int i = 0; i < s.size()-1; i++)
		{
			if (s[i]>'4')
			{
				s[i+1]+=1;
				for(int j = i; j >= 0; j--){
					s[j]='0';
				}
			}
		}
		reverse(s.begin(),s.end());
		int zero=0;
		if (s[0]=='0')
		{
			zero++;
		}
		for (int i=zero;i<s.size();i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int convert(string m){
	int x=0;
	for (int i = 0; i < m.size(); i++)
	{
		x=x*10+(m[i]-'0');
	}
	return x;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s; cin>>s;
		string s1="",s2="";
		int flag=0;
		map<char,int>mp;
		for (int i = 0; i < s.size(); i++)
		{
			mp[s[i]]++;
		}
		if (mp['0']>0)
		{
			s1+=s[0];
			for (int i = 1; i < s.size(); i++)
		    {
			    if (s[i]=='0' && flag==0)
			    {
			    	s1+=s[i];
			    }else{
			    	s2+=s[i];
			    	flag=1;
			    }
			}
			int x=convert(s1);
			int y=convert(s2);
			// cout<<x<<" "<<y<<endl;
			if (x>y)
			{
				cout<<-1<<endl;
			}
			else if (x==y)
			{
				cout<<"-1"<<endl;
			}else{
				cout<<s1<<" "<<s2<<endl;
			}
		}
		else{
			for (int i = 0; i < s.size(); i++)
			{
				if (i==0)
				{
					s1+=s[i];
				}else{
					s2+=s[i];
				}
			}
			int x=convert(s1);
			int y=convert(s2);
			if (x>=y)
			{
				cout<<-1<<endl;
			}else{
				cout<<x<<" "<<y<<endl;
			}
		}
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		if (s=="()")
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
			string s2="";
			for (int i = 0; i < s.size(); i++)
			{
				s2+="()";
			}
			if (s2.find(s)==string::npos)
			{
				cout<<s2<<endl;
			}else{
				for (int i = 0; i < s.size(); i++)
				{
					cout<<'(';
				}
				for (int i = 0; i < s.size(); i++)
				{
					cout<<')';
				}
				cout<<endl;
			}
		}
	}

	return 0;
}
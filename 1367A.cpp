#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		if (s.length()==2)
		{
			cout<<s<<endl;
		}else{
			cout<<s[0];
			for (int i = 1; i < s.length()-1; i+=2)
			{
				cout<<s[i];
			}
			cout<<s[s.length()-1]<<endl;
		}
	}

	return 0;
}
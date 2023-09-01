#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		string a="";
		int flag=0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i]%2==1)
			{
				a+=s[i];
				break;
			}
		}
		// cout<<a<<endl;
		if (a=="1")
		{
			cout<<13<<endl;
		}else if (a=="3")
		{
			cout<<37<<endl;
		}else if (a=="5")
		{
			cout<<53<<endl;
		}else if (a=="7")
		{
			cout<<79<<endl;
		}else if (a=="9")
		{
			cout<<97<<endl;
		}
	}

	return 0;
}
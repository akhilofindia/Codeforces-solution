#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		char ok; cin>>ok;
		int l=0,r=0;
		bool flag=false;;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i]==ok)
			{
				if ((i+1)%2!=0)
				{
					flag=true;
					break;
				}
			}
		}
		if (flag)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}
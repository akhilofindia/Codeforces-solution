#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		int cnt=0;
		if (s[0]=='a')
		{
			cnt++;
		}
		if (s[1]=='b')
		{
			cnt++;
		}
		if (s[2]=='c')
		{
			cnt++;
		}
		if (cnt==0)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
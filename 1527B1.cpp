#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s;cin>>s;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			if (s[i]=='0')
			{
				cnt++;
			}
		}
		if (cnt!=1 && cnt%2)
		{
			cout<<"ALICE"<<endl;
		}else{
			cout<<"BOB"<<endl;
		}

	}

	return 0;
}
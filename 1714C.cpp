#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int s; cin>>s;
		string ans;
		for (int i = 9; i > 0; i--)
		{
			if (s>=i)
			{
				ans+='0'+i;
				s-=i;
			}
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}

	return 0;
}
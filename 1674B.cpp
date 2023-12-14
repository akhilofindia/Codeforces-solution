#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		map<string,int>mp;
		int cnt=1;
		for (char i = 'a'; i <= 'z'; i++)
		{
			for (char j = 'a'; j <= 'z'; j++)
			{
				if (i!=j)
				{
					string ss;
					ss+=i;
					ss+=j;
					mp[ss]=cnt++;
				}
			}
		}
		cout<<mp[s]<<endl;
	}

	return 0;
}
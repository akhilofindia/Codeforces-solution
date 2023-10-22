#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int flag=1;
		if (n<k)
		{
			flag=0;
		}else{
			map<char,int>mp;
			for (int i = 0; i < n; i++)
			{
				mp[s[i]]++;
			}
			int cnt=0;
			for (auto x:mp)
			{
				cnt+=x.second%2;
			}
			
			if (k<cnt-1)
			{
				flag=0;
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
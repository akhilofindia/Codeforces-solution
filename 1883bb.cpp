#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		map<char,int>mp;
		for (int i = 0; i < n; i++)
		{
			mp[s[i]]++;
		}
		int cnt=0;
		for (auto it: mp)
		{
			cnt+=it.second%2;
		}
		if (cnt-1>k || k>n)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
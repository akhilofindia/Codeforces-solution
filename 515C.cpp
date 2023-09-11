#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string s;cin>>s;
	map<char,string>mp;
	mp['0']="";
	mp['1']="";
	mp['2']="2";
	mp['3']="3";
	mp['4']="322";
	mp['5']="5";
	mp['6']="35";
	mp['7']="7";
	mp['8']="2227";
	mp['9']="2337";
	string c="";
	for (int i = 0; i < n; i++)
	{
		c+=mp[s[i]];
	}
	sort(c.begin(),c.end());
	reverse(c.begin(),c.end());
	cout<<c<<endl;

	return 0;
}
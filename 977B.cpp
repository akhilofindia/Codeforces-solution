#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string s;cin>>s;
	map<string,int>mp;
	for (int i = 0; i < s.length()-1; i++)
	{
		string word="";
		word+=s[i];
		word+=s[i+1];
		mp[word]++;
	}
	int mx=0;
	string w="";
	for (auto& i:mp)
	{
		if (i.second>mx)
		{
			mx=i.second;
			w=i.first;
		}
	}
	cout<<w<<endl;

	return 0;
}
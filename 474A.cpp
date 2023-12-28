#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	if (a=="R")
	{
		for (int i = 0; i < b.size(); i++)
		{
			for (int j = 0; j < s.size(); j++)
			{
				if (b[i]==s[j])
				{
					cout<<s[j-1]; 
					break;
				}
			}
		}
	}else{
		for (int i = 0; i < b.size(); i++)
		{
			for (int j = 0; j < s.size(); j++)
			{
				if (b[i]==s[j])
				{
					cout<<s[j+1]; 
					break;
				}
			}
		}
	}

	return 0;
}
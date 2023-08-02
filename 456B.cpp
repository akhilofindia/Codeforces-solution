#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	int n=s.size();
	int s1=s[n-2]-'0';
	int s2=s[n-1]-'0';
	int k=s1*10+s2;
	if (k%4==0)
	{
		cout<<4<<endl;
	}else{
		cout<<0<<endl;
	}

	return 0;
}
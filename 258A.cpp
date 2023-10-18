#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	string t="";
	bool flag=false;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i]=='0' && !flag)
		{
			flag=true;
			continue;
		}else{
			t+=s[i];
		}
	}
	if (!flag)
	{
		t.pop_back();
	}
	cout<<t<<endl;

	return 0;
}
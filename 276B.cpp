#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;cin>>a;
	map<char,int> mp;
	for (int i = 0; i < a.size(); i++)
	{
		mp[a[i]]++;
	}
	int cnt=0;
	for (int i = 0; i < mp.size(); i++)
	{
		if (mp[i]%2!=0)
		{
			cnt++;
		}
	}
	if (cnt%2!=0 ||cnt==0)
	{
		cout<<"First"<<endl;
	}else{
		cout<<"Second"<<endl;
	}


	return 0;
}
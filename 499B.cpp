#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin>>n>>m;
	map <string,string> ans;
	string a,b;
	for (int i = 0; i < m; i++)
	{
		cin>>a>>b;
		ans[a]=b;
	}
	string c,d;
	for (int i = 0; i < n; i++)
	{
		cin>>c;
		d=ans[c];
		if (c.size()>d.size())
		{
			cout<<d<<" ";
		}else
		    cout<<c<<" ";
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string s;cin>>s;
	int a=0,b=0;
	for (int i = 0; i < n; i++)
	{
		if (s[i]=='0')
		{
			a++;
		}else if (s[i]=='1')
		{
			b++;
		}
	}
	cout<<abs(a-b)<<endl;

	return 0;
}
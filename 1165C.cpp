#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s,res;
	cin>>n>>s;
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		if (i!=n-1 && s[i]!=s[i+1])
		{
			res+=s[i];
			res+=s[i+1];
			i++;
			cnt+=2;
		}
	}
	cout<<n-cnt<<endl;
	cout<<res<<endl;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long a=s.length();
	long long ans=0;
	for (long long i = a-1,count=0; i >=0; i--,count++)
	{
		if (s[i]=='4')
		{
			ans+=(1<<count);
		}
		if (s[i]=='7')
		{
			ans+=(1<<(count+1));
		}
	}
	cout<<ans<<endl;

	return 0;
}
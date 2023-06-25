#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,n;
	cin>>a>>b>>n;
	long long m=1000000007;
	if (n%6==1)
	{
		cout<<(a+(m*2)) % m<<endl;
	}if (n%6==2)
	{
		cout<<(b+(m*2)) % m<<endl;
	}if (n%6==3)
	{
		cout<<(b-a+(m*2)) % m<<endl;
	}if (n%6==4)
	{
		cout<<(-a+(m*2)) % m<<endl;
	}if (n%6==5)
	{
		cout<<(-b+(m*2)) % m<<endl;
	}if (n%6==0)
	{
		cout<<(a-b+(m*2)) % m<<endl;
	}

	return 0;
}
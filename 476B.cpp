#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main(){
	string s1,s2; cin>>s1>>s2;
	int ans1=0,ans2=0;
	int q=0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i]=='+')
		{
			ans1++;
		}else if (s1[i]=='-')
		{
			ans1--;
		}
	}
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i]=='+')
		{
			ans2++;
		}else if (s2[i]=='-')
		{
			ans2--;
		}else if (s2[i]=='?')
		{
			q++;
		}
	}
	int final=(ans1-ans2);
	int nreqd=(q-final)/2;
	if (q==0)
	{
		if (final!=0)
		{
			cout<<0<<endl;
		}else{
			cout<<1<<endl;
		}
	}else if ((abs(final)%2)!=(q%2) || abs(final)>q)
	{	
		cout<<0<<endl;
	}else{
		double f=pow(2,q);
		double m=fact(q);
		double n=fact(q-nreqd);
		double o=fact(nreqd);
		double p=(m/(n*o));
		cout<<fixed<<setprecision(12)<<p/f<<endl;
	}
	return 0;
}
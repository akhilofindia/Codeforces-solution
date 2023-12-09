#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	long long a[n],b[n];
	for (long long i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (long long i = 1; i < n; i++)
	{
		cin>>b[i];
	}
	long long cnt=0;
	for (int i = 0; i < 5; i++)
	{
		for (long long i = 1; i < n; i++)
		{
			a[b[i]-1]+=a[i];
		}
	}
	long long ne=0,p=0,z=0;
	for (long long i = 0; i < n; i++)
	{
		if (a[i]<0)
		{
			ne++;
		}else if (a[i]>0)
		{
			p++;
		}else{
			z++;
		}
	}
	if (z==p && z==ne)
	{
		cout<<"0"<<endl;
	}else if (p>z && p>ne)
	{
		cout<<"+"<<endl;
	}else{
		cout<<"-"<<endl;
	}
	// if (a[0]==0)
	// {
	// 	cout<<"0"<<endl;
	// }else if (a[0]>0)
	// {
	// 	cout<<"+"<<endl;
	// }else{
	// 	cout<<"-"<<endl;
	// }

	return 0;
}
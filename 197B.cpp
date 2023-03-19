#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int a,b,c,g;
	int arr[n+1];
	int arr2[n+1];
	for (int i = 0; i < n+1; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n+1; i++)
	{
		cin>>arr2[i];
	}
	a=arr[0];
	b=arr2[0];
	if (n>m)
	{
		if (a*b<0)
		{
			cout<<"-Infinity"<<endl;
		}else
		    cout<<"Infinity"<<endl;
	}else if (n<m)
	{
		cout<<"0/1"<<endl;
	}else{
		a = abs(a);
		b = abs(b);
		g = __gcd(a, b);
		cout << a / g << "/" << b / g;
	}
	return 0;
}
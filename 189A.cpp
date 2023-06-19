#include <bits/stdc++.h>
using namespace std;

int main(){
	// int n; cin>>n;
	// vector <int> v;
	// for (int i = 0; i < 3; i++)
	// {
	// 	cin>>v[i];
	// }
	// for (int i = 0; i < 2; i++)
	// {
	// 	v.push_back(v[i]+v[i+1]);
	// }
	// int mx=0;
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	if (n%v[i]==0)
	// 	{
	// 		mx=max(mx,v[i]);
	// 	}
	// }
	// cout<<mx<<endl;
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int m,x,o,p;
	m=a+b;
	x=b+c;
	o=a+c;
	p=a+b+c;
	int mx=0;
	if (n%m==0)
	{
		mx=max(mx,n/m * 2);
	}if (n%x==0)
	{
		mx=max(mx,(n/x *2));
	}
	if (n%o==0)
	{
		mx=max(mx,(n/o *2));
	}
	if (n%p==0)
	{
		mx=max(mx,(n/p *3));
	}
	if (n%a==0)
	{
		mx=max(mx,(n/a));
	}if (n%b==0)
	{
		mx=max(mx,(n/b));
	}if (n%c==0)
	{
		mx=max(mx,(n/c));
	}
	cout<<mx<<endl;


	return 0;
}
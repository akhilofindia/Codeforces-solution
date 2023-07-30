#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin>>n;
	h=pow(n,0.5);
	if (h*h==n)
	{
		cout<<2*h<<endl;
	}else if(h*(h+1)>=n)
	{
		cout<<2*h+1<<endl;
	}else{
		cout<<2*h+2<<endl;
	}

	return 0;
}
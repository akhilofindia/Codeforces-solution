#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int a,b,c,d;
		d=n%10; 
		n/=10; 
		c=n%10;
		n/=10;
		b=n%10;
		n/=10;
		a=n%10;
		int cnt=4;
		if (a==0)
		{
			a=10;
		}if (b==0)
		{
			b=10;
		}if (c==0)
		{
			c=10;
		}if (d==0)
		{
			d=10;
		}
		cnt+=abs(a-1)+abs(b-a)+abs(c-b)+abs(d-c);
		cout<<cnt<<endl;
	}

	return 0;
}
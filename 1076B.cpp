#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	long long cnt=1;
	if (n%2==0)
	{
		cnt=n/2;
	}else{
		for (long long i = 2; i <= sqrt(n); i++)
		{
			if (n%i==0)
			{
				n-=i;
				cnt+=n/2;
				break;
			}
		}
	}
	cout<<cnt<<endl;

	return 0;
}
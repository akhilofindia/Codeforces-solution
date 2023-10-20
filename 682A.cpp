#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b;cin>>a>>b;
	long long sum=0;
	for (long long i = 1; i <= a; i++)
	{
		sum+=(b+(i%5))/5;
	}
	cout<<sum<<endl;

	return 0;
}
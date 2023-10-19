#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;cin>>a>>b;
	int sum=0;
	for (int i = 1; i <= a; i++)
	{
		sum+=(b+(i%5))/5;
	}
	cout<<sum<<endl;

	return 0;
}
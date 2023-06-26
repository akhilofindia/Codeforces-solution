#include <bits/stdc++.h>
using namespace std;

bool ok(long long n){
	while(n>1){           //if factors are anything other than 2or3
		if (n%2==0)		  //the numbers cant get equal
		{
			n/=2;
		}else if (n%3==0)
		{
			n/=3;
		}else{
			return false;
		}
	}
	return true;
}
int main(){
	long long n;cin>>n;
	vector<long long>arr(n);
	for (long long i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	long long a=arr[0];
	for (int i = 1; i < n; i++)
	{
		a=__gcd(a,arr[i]);
	}
	int flag=0;
	for (int i = 0; i < n; i++)
	{
		arr[i]=arr[i]/a;
		if (!ok(arr[i]))
		{
			flag=1;
			break;
		}
	}
	flag==1 ? cout<<"No"<<endl:cout<<"Yes"<<endl;
	return 0;
}
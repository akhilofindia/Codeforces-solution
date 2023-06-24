#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){
	int n;cin>>n;
	long long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		long long a=sqrt(arr[i]);
		if (isPrime(a) && a*a==arr[i])
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
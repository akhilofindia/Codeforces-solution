#include <bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,x,y;
		cin>>n>>x>>y;
		int z=lcm(x,y);
		int cnt=n/z;
		int sum1=0;
		for (int i = n;i>=n/x-z; i--)
		{
			sum1++;
		}
		int sum2=0;
		for (int i = 1; i <= n/y-z; i++)
		{
			sum2++;
		}
		cout<<sum1-sum2<<endl;

	}

	return 0;
}
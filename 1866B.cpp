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

int mod =998244353; 
int main(){
	int n;cin>>n;
	int a1[n],a2[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin>>a2[i];
	}
	int num1=1;
	for (int i = 0; i < n; i++)
	{
		num1*=pow(a1[i],a2[i]);
	}
	int m;cin>>m;
	int b1[m],b2[m];
	for (int i = 0; i < m; i++)
	{
		cin>>b1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin>>b2[i];
	}
	int num2=1;
	for (int i = 0; i < m; i++)
	{
		num2*=pow(b1[i],b2[i]);
	}
	// cout<<num1/num2<<endl;
	int cnt=0;
	for (int i = num2; i <= num1; i+=num2)
	{
		for (int j=num1;j>=num2; i-=num2)
		{
			if (lcm(i,j)==num1)
			{
				cnt++;
				if (i==j)
				{
					break;
				}
			}
		}
	}
	cout<<cnt<<endl;


	return 0;
}
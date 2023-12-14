#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) 
{ 
  if (a == 0) 
    return b; 
  return gcd(b % a, a); 
} 

long long findGCD(vector<long long>&arr) 
{ 
	long long n=arr.size();
  long long result = arr[0]; 
  for (long long i = 1; i < n; i++) 
  { 
    result = gcd(arr[i], result); 
  
    if(result == 1) 
    { 
    return 1; 
    } 
  } 
  return result; 
} 

int main(){
	long long tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<long long>one,two;
		for (long long i = 0; i < n; i++)
		{
			if (i%2!=0)
			{
				one.push_back(arr[i]);
			}else{
				two.push_back(arr[i]);
			}
		}
		long long x=findGCD(one);
		long long y=findGCD(two);
		bool xflag=true,yflag=true;
		
		for (long long i = 0; i < one.size(); i++)
		{
			if (one[i]%y==0)
			{
				yflag=false;
				break;
			}
		}
		for (long long i = 0; i < two.size(); i++)
		{	
			if (two[i]%x==0)
			{
				xflag=false;
				break;
			}
		}
		if (xflag==true)
		{
			cout<<x<<endl;
		}else if (yflag==true)
		{
			cout<<y<<endl;
		}else if (xflag==false && yflag==false)
		{
			cout<<0<<endl;
		}

	}

	return 0;
}
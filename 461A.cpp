#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	vector<long long>v(n);
	for (long long i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	long long sum=0,j=2;
	for (long long i = 0; i < n; i++)
	{
		if (i==n-1)
		{
			sum+=v[i]*n;
		}else{
			sum+=v[i]*j;
			j++;
		}
	}
	cout<<sum<<endl;

	return 0;
}
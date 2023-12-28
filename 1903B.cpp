#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc; 
	while(tc--){
		long long n;cin>>n;
		long long m[n][n];
		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < n; j++)
			{
				cin>>m[i][j];
			}
		}
		vector<long long>v;
		for (long long i = 0; i < n; i++)
		{
			long long val=(1<<30)-1;
			for (long long j = 0; j < n; j++)
			{
				if (i!=j)
				{
					val&=m[i][j];
				}
			}
			v.push_back(val);
		}
		long long cnt=0;
		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < n; j++)
			{
				if (i!=j && (v[i]|v[j])!=m[i][j])
				{
					cnt=1;
					break;
				}
			}
		}
		if (n==1)
		{
			cout<<"YES"<<endl;
			cout<<1<<endl;
		}else if (cnt==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
			for (long long i = 0; i < n; i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}
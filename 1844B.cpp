#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;
		cin>>n;
		vector<long long>v(n);
		v[0]=2;
		v[n-1]=3;
		v[n/2]=1;
		long long ans=4;
		for (int i = 1; i <= n-2; i++)
		{
			if (i==n/2)	
			{
				continue;
			}
			v[i]=ans;
			ans++;
		}
		for (int i = 0; i < n; i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
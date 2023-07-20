#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,m; cin>>n>>m;
		long long stair[n],ques[m];
		for (long long i = 0; i < n; i++)
		{
			cin>>stair[i];
		}
		long long presum[n],premax[n];
		presum[0]=stair[0];
		premax[0]=stair[0];
		for (long long i = 1; i < n; i++)
		{
			presum[i]=presum[i-1]+stair[i];
			premax[i]=max(premax[i-1],stair[i]);
		}
		for (long long i = 0; i < m; i++)
		{
			cin>>ques[i];
			long long a=upper_bound(premax,premax+n,ques[i])-premax;
			if (a==0)
			{
				cout<<0<<" ";
			}else{
				cout<<presum[a-1]<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}
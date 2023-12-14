#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k,q;
		cin>>n>>k>>q;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		long long cnt=0;
		vector<long long>v;
		for (long long i = 0; i < n; i++)
		{
			// cnt++;
			if (arr[i]>q)
			{
				// cout<<arr[i]<<" "<<cnt<<" "<<endl;
				v.push_back(cnt);
				cnt=0;
			}else{
				cnt++;
			}
			if (i==n-1)
			{
				v.push_back(cnt);
			}
		}
		long long ans=0;
		for (long long i = 0; i < v.size(); i++)
		{
			if (v[i]>=k)
			{
				ans+=((v[i]-k+1)*(v[i]-k+2))/2;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}
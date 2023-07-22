#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k ;cin>>n>>k;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		long long mx=0; 
		vector<long long>v;
		for (long long i = 0; i < n-1; i++)
		{
			if (arr[i+1]-arr[i]<=k)
			{
				mx++;
			}else{
				v.push_back(mx+1);
				mx=0;
			}if(i==n-2){
				v.push_back(mx+1);
			}
		}
		long long x=*max_element(v.begin(),v.end());
		cout<<n-x<<endl;
	}

	return 0;
}
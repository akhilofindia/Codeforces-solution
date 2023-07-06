#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<int>v;
		for (int i = 1; i < n; i++)
		{
			v.push_back(abs(arr[i]-arr[i-1]));
		}
		sort(v.begin(),v.end());
		long long a=n-k;
		long long sum=0;
		for (int i = 0; i < a; i++)
		{
			sum+=v[i];
		}
		cout<<sum<<endl;

	}

	return 0;
}
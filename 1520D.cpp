#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n; cin>>n;
		map<long long,long long>mp;
		long long arr[n];
		long long cnt=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cnt+=mp[arr[i]-i];
			mp[arr[i]-i]++;
		}
		cout<<cnt<<endl;
	}

	return 0;
}
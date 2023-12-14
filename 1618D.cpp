#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		vector<long long>arr(n);
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		reverse(arr.begin(),arr.end());
		long long score=0;
		for (long long i = 0; i < k; i++)
		{
			score+=(arr[i+k]/arr[i]);
		}
		for (long long i = 2*k; i < n; i++)
		{
			score+=arr[i];
		}
		cout<<score<<endl;
	}

	return 0;
}	
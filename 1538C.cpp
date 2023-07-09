#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,l,r;cin>>n>>l>>r;
		vector <long long>arr(n);
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		long long cnt=0;
		sort(arr.begin(),arr.end());
		for (long long i = 0; i < n; i++)
		{
			auto a=lower_bound(arr.begin()+i+1,arr.end(),l-arr[i]);
			auto b=upper_bound(arr.begin()+i+1,arr.end(),r-arr[i]);
			cnt+=b-a;
		}
		cout<<cnt<<endl;
	}

	return 0;
}
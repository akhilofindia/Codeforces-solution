#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<long long>diff;
		// long long diff[n];
		for (long long i = 0; i < n-1; i++)
		{
			diff.push_back(arr[i+1]-arr[i]);
		}
		long long x=*min_element(diff.begin(),diff.end());
		if (x<0)
		{
			cout<<0<<endl;
		}else if(x==0){
			cout<<1<<endl;
		}else{
			cout<<x/2+1<<endl;
		}
	
	}

	return 0;
}
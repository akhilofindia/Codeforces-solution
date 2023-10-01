#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long a,b,n; cin>>a>>b>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		long long cnt=b-1;
		b=1;
		for (long long i = 0; i < n; i++)
		{
			b+=arr[i];
			b=min(a,b);
			cnt+=b-1; 
			b=1;
		}
		cnt++;
		cout<<cnt<<endl;
	}

	return 0;
}
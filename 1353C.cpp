#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n;
		cin>>n;
		long long count=0;
		for (long long i = 1; i <= n/2; i++)
		{
			count+=i*i;
		}
		cout<<count*8<<endl;
	}

	return 0;
}
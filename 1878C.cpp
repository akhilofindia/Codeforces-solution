#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k,x;cin>>n>>k>>x;
		long long flag=0;
		if (k*(k+1)/2 > x)
		{
			flag=1;
		}else if ((2*n-k+1)*k/2<x)
		{
			flag=1;
		}
		if (flag)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
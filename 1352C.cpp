#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		long long ans=(k-1)/(n-1);
		cout<<k+ans<<endl;
	}
	

	return 0;
}
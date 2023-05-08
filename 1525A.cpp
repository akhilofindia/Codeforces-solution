#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int m=100-n;
		int b=__gcd(n,m);
		cout<<n/b+m/b<<endl;
	}

	return 0;
}
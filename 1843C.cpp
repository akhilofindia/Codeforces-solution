#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long ans=0;
		while(n>0){
			ans+=n;
			n/=2;
		}
		cout<<ans<<endl;
	}

	return 0;
}
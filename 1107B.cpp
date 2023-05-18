#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long k,x;
        cin>>k>>x;
        long long ans = (k-1)*9+x;
        cout<<ans<<endl;
	}

	return 0;
}
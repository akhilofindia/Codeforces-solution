#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k;
		cin>>n>>k;
    	long long ans = 0;
		vector<long long> a(n);
    	for (int i = 0; i < n; i++) 
    	{
        	cin>>a[i];
    	}
    	for (int i = k; i < n; i++) 
    	{
        	a[i%k] = max(a[i%k],a[i]);
    	}
    	for (int i = 0; i < k; i++) {
    	    ans += a[i];
    	}
    	cout<<ans<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k; cin>>n>>k;
		int ans=INT_MAX;	
		for (int i = 1; i <= n; i++)
		{
			int a=(n+k-2)/k;
			int b=(n-i+k)/k;
			ans=min(ans,a+b);
		}
		cout<<ans<<endl;
	}

	return 0;
}
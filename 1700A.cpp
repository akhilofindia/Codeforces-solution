#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n,m; cin>>n>>m;
		long long ans=m*(m+1)/2; 
		for (int i = 2; i <= n; i++)
		{
			ans+=i*m;
		}
		cout<<ans<<endl;
	}

	return 0;
}
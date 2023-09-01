#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,m;cin>>n>>m;
		long long mn=min(m,n);
		if ((n+m)/3<=mn && (n+m)%3==0)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}

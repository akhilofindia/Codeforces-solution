#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;cin>>n>>m;
		int mn=min(m,n);
		if ((n+m)/3<=mn && (n+m)%3==0)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}
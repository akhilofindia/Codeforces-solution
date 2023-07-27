#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int b,c,h; cin>>b>>c>>h;
		int n=c+h;
		if (b>n)
		{
			cout<<n+(n+1)<<endl;
		}else{
			cout<<b+(b-1)<<endl;
		}

	}

	return 0;
}
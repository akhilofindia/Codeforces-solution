#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long a,b;cin>>a>>b;
		if (a!=1 && b!=1)
		{
			cout<<1<<endl;
		}else{
			cout<<a+b<<endl;	
		}
	}

	return 0;
}
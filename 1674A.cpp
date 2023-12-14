#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b;cin>>a>>b;
		if (a>b || b%a!=0)
		{
			cout<<0<<" "<<0<<endl;
		}else{
			cout<<1<<" "<<b/a<<endl;
		}
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b,n; cin>>a>>b>>n;
		int c=0;
		while(a<=n && b<=n){
			if (a>b)
			{
				b+=a;
			}else{
				a+=b;
			}
			c++;
		}
		cout<<c<<endl;
	}

	return 0;
}
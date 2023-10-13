#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		int a=2;
		while(n%a){
			a++;
		}
		cout<<n+a+2*(k-1)<<endl;
	}

	return 0;
}
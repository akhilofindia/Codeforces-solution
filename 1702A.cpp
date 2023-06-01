#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int a=n;
		int count = 0;
        while(a!=0) {
      		a=a/10;
      		count++;
   		}
   		// cout<<count<<endl;
   		int ans =pow(10,count-1);
   		cout<<n-ans<<endl;
	}

	return 0;
}
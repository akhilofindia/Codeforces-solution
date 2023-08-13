#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b;cin>>a>>b;
        cout<<min({a,b,(a+b)/3})<<endl;
	}

	return 0;
}
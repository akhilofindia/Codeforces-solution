#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		float a,b,c;cin>>a>>b>>c;
		float k=abs(a-b)/2;
		cout<<ceil(k/c)<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum = a+b+c+d;
        if (sum == 0){
            cout<<0<<endl;
        }else if (sum == 4){
            cout<<2<<endl;
        }else 
            cout<<1<<endl;
	}

	return 0;
}
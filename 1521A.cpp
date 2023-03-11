#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin >> tc;
    while (tc--){
        long long a,b; 
        cin>>a>>b;
        long long c=a*b*3;
        long long d=c-a;
        if (b == 1) {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<a<<' '<<d<<' '<<c<<endl;
        }
    }

	return 0;
}
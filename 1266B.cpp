#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long int n;
        cin>>n;
        int a=n%14;
        if(a<7 && a!=0 && n>14){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}

	return 0;
}
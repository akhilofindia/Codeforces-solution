#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long a,b,c;
        cin>>a>>b>>c;
        if(b-a == c-b){
            cout<<"YES"<<endl;
        }
        else if(abs(a+c)%(2*b)==0){
            cout<<"YES"<<endl;
        }
        else if(((2*b-c)>0) && (2*b-c)%a==0){
            cout<<"YES"<<endl;
        }
        else if(((2*b-a)>0) && ((2*b-a)%c==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}

	return 0;
}
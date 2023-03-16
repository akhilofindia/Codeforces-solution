#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,x,count=0,c;
    cin>>n>>x;
    c=x;
    for(int i=0;i<n;i++){
        char a;
        int b;
        cin>>a>>b;
        if(a=='+'){
           c+=b;
        }else if(a=='-'){
           if(c>=b){
              c-=b;
           }else
              count++;
        }
    }
    cout<<c<<" "<<count<<endl;

	return 0;
}
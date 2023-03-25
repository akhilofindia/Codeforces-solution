#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,a,b,c;
    cin>>a>>b>>c;
    int count;
    n=abs(a)+abs(b);
    if(n==c){
        count=1;
    }else if(n>c){
        count=0;
    }else{
        if(c%2==0 && n%2==0){
           count=1;
        }else if(c%2==1 && n%2==1){
           count=1;
        }else
           count=0;
    }
    if(count==1){
        cout<<"Yes"<<endl;
    }else
        cout<<"No"<<endl;
    

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x=max((3*a)/10,a-(a/250)*c);
    int y=max((3*b/10),b-(b/250)*d);
    if(x==y){
        cout<<"Tie"<<endl;
    }else if(x>y){
        cout<<"Misha"<<endl;
    }else{
        cout<<"Vasya"<<endl;
    }

	return 0;
}
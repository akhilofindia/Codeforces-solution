#include <bits/stdc++.h>
using namespace std;

int main(){
	double h,l,a;
    cin>>h>>l;
    a=((l*l)-(h*h))/(2*h);
    cout<<fixed<<setprecision(13)<<a<<endl;

	return 0;
}
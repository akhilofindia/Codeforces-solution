#include <bits/stdc++.h>
using namespace std;

int main(){
	int r,x2,y2,x1,y1;
	cin>>r>>x2>>y2>>x1>>y1;
	double m=pow((y1-y2),2);
	double n=pow((x1-x2),2);
	double a=sqrt(m+n);
	cout<<ceil(a/(2*r))<<endl;

	return 0;
}
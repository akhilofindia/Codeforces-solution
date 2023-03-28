#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
    cin>>a>>b>>c;
    int d=min(b/2,c/4);
    cout<<min(a,d)*7<<endl;

	return 0;
}
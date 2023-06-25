#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int ax,ay; cin>>ax>>ay;
	int bx,by; cin>>bx>>by;
	int cx,cy; cin>>cx>>cy;
	if (
		(ax>bx && ax>cx && ay>by && ay>cy) ||
		(ax>bx && ax>cx && ay<by && ay<cy) ||
		(ax<bx && ax<cx && ay>by && ay>cy) ||
		(ax<bx && ax<cx && ay<by && ay<cy)

		)
	{
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}
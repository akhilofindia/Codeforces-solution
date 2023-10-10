#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int px,py;cin>>px>>py;
		int ax,ay;cin>>ax>>ay;
		int bx,by;cin>>bx>>by;
		int l=0,r=1e9;
		int dist=sqrt((ax-px)*(ax-px)+(by-py)*(by-py));
		cout<<dist<<endl;
		// while(l<=r){
		// 	int m=l+(r-l)/2;
		// 	if (dist<=2*m)
		// 	{
		// 		r=m;
		// 	}else{
		// 		l=m;
		// 	}
		// }
	}

	return 0;
}
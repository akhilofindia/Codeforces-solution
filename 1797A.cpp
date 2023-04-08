#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		int a,b,c,d; cin>>a>>b>>c>>d;
		if((a==1&&b==1) || (c==1&&d==1) ||(a==n&&b==m) || (c==n&&d==m) ||(a==1&&b==m) ||(c==1&&d==m) || (a==n&&b==1)||(c==n&&d==1)){
            cout<<2<<endl;
        }else if(a==1||a==n||c==1||c==n||b==1||b==m||d==1||d==m){
            cout<<3<<endl;
        }else{
            cout<<4<<endl;
        }

	}

	return 0;
}
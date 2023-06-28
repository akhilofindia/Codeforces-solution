#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b,c,d; cin>>a>>b>>c>>d;
		int alice=0;
		int bob=0;
		int cnt=0;
		if (a==0)
		{
			cout<<1<<endl;
		}
		else{
			int ans=a+min(b,c)*2+min(a+1,abs(b-c)+d);   //listens to b&c consecutively until one is over
			cout<<ans<<endl;
		}
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long a,b; cin>>a>>b;
		int x,y;
		x=abs(a);y=abs(b);
		if (x==y)
		{
			cout<<x+y<<endl;
		}else
		    cout<<2*max(x,y)-1<<endl;
	}

	return 0;
}
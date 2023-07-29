#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int c,m,x;cin>>c>>m>>x;
		int ans=min(m,(c+m+x)/3);
		cout<<min(c,ans)<<endl;
	}

	return 0;
}
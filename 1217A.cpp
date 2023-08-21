#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b,c;
		cin>>a>>b>>c;
		a=a+c;
		int diff=a-b;
		int ans=0;
		if (diff>0)
		{
			ans=min(diff/2+diff%2,c+1);
		}
		cout<<ans<<endl;
	}

	return 0;
}
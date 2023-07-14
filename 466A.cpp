#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a,b; cin>>n>>m>>a>>b;
	int ans=0;
	int cnt;
	if (a>b/m)
	{
		ans+=(n/m)*b;
		if ((n%m)*a>b)
		{
			ans+=b;
		}else
			ans+=a*(n%m);
	}else{
		ans=n*a;
	}
	cout<<ans<<endl;

	
	return 0;
}
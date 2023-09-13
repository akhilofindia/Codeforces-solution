#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long a,b,n,m;
		cin>>a>>b>>n>>m;
		int flag=0;
		if (a+b<n+m)
		{
			flag=1;
		}
		if (min(a,b)<m)
		{
			flag=1;
		}
		if (flag)
		{
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}

	return 0;
}
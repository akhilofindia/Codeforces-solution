#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,m,k;cin>>n>>m>>k;
		long long flag=0;
		long long a,b; cin>>a>>b;
		while(k--){
			long long c,d; cin>>c>>d;
			long long x=abs(a-c);
			long long y=abs(b-d);
			if (x%2==y%2)
			{
				flag=1;
			}
		}
		if (flag==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}
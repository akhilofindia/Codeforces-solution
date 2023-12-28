#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,a,b; cin>>n>>a>>b;
		int cnt=0;
		while(a--){
			if (n<=10*b)
			{
				cnt=1;
				break;
			}
			if (n%2==1)
			{
				n-=1;
			}
			n/=2;
			n+=10;
		}
		if (n-10*b<=0)
		{
			cnt=1;
		}
		if (cnt==1)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
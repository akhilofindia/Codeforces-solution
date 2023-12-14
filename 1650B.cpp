#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int l,r,n;
		cin>>l>>r>>n;
		if (r==l)
		{
			cout<<r/n+r%n<<endl;
		}else if (r/n==l/n)
		{
			if (r%n==0)
			{
				cout<<(r-1)/n + (r-1)%n<<endl;
			}else{
				cout<<r/n+r%n<<endl;
			}
		}else{
			if (r%n==n-1)
			{
				cout<<r/n+r%n<<endl;
			}else{
				cout<<r/n+n-2<<endl;
			}
		}
	}

	return 0;
}
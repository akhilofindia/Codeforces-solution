#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int x=n/3;
		if (n%3==0)
		{
			cout<<x<<' '<<x+1<<' '<<x-1<<endl;
		}else if (n%3==1)
		{
			cout<<x<<' '<<x+2<<' '<<x-1<<endl;
		}else{
			cout<<x+1<<' '<<x+2<<' '<<x-1<<endl;
		}
	} 

	return 0;
}
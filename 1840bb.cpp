#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k; 
		if (k>=30)
		{
			cout<<n+1<<endl;
		}else{
			int x=pow(2,k);
			cout<<min(n+1,x)<<endl;
		}
	}

	return 0;
}
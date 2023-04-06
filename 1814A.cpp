#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n,k;
		cin>>n>>k;
		if (k%2==0 && n%2==1)
		{
			cout<<"NO"<<endl;
		}else
		    cout<<"YES"<<endl;
	}

	return 0;
}
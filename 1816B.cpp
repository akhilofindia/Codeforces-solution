#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
        cout <<2*n-1 << " ";
        for(int i = 0;i < (n/2-1); i++){
        	cout <<1+2*i<<" "<< n+2*i+1 << " ";
    	}
    	cout<<n-1<<endl;
    	for(int i = 1;i <= n/2; i++){
        	cout <<2*i<<" "<< n+2*i <<" ";
    	}
    	cout<<endl;
	}

	return 0;
}
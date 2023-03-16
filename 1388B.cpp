#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		double n;
	    cin>>n;
	    double count = ceil(n/4);
	    int m = n-count;
	    for(int i = 0; i < m; i++){
		   cout<<9;
	    }
	    for(int i = 0; i < count; i++){
		   cout<<8;
	    }
	    cout<<endl;
	}

	return 0;
}
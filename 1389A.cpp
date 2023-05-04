#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int a, b; 
		cin >> a >> b;
    	if (b >= 2*a){
        	cout << a << " " << 2*a << endl;
	    }
    	else{
        	cout << -1 << " " << -1 << endl;
    	}
	}

	return 0;
}
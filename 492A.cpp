#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k; 
		cin>>n>>k;
    	string s; cin>>s ;
    	string t=s;
    	reverse (t.begin(),t.end());
    	if (s == t || k == 0){
    	    cout << 1 << endl ;
    	}
    	else{
    	    cout<<2<<endl ;
    	}
	}

	return 0;
}
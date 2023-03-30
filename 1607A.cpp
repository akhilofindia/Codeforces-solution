#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int count=0;
	    int n,a;
		cin>>n>>a;
		for(int i = 1 ;i < n; i++){
			int b;
			cin>>b;
			if(b%2!=a%2){
				count = 1;
			}
		}
		if(count==0) 
            cout<<"YES"<<endl;
		else 
		    cout<<"NO"<<endl;
	}

	return 0;
}
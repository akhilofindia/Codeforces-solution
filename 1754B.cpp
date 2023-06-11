#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
        for (int i = 1; i <= n/2; i++) 
        {
        	cout<<n/2+i<<' '<<i<< ' ';
    	}
    	if (n%2==1) 
    	{
    		cout<<n<< ' ';
    	}
    	cout<<endl;
	}

	return 0;
}
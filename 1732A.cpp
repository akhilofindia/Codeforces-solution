#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,ans=0; 
		cin >> n;
        int arr[n];
    	for(int i=0; i<n; ++i)
    	{
    		cin >> arr[i]; 
    		ans=__gcd(ans,arr[i]);
    	}
    	if(ans==1){
        	cout << "0"<<endl;
	    }else if(__gcd(ans,n)==1){
    	    cout<<"1"<<endl;
    	}else if(__gcd(ans,n-1)==1){
  		    cout<<"2"<<endl;
    	}else{
    		cout<<"3"<<endl;
    	}
	}

	return 0;
}
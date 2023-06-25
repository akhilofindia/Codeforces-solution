#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1){
        return false;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int a=0;
		if (isPrime(n))
		{
			a=n;
			cout<<n/a<<" "<<(n-(n/a))<<endl;
		}else{
			for(int i = 2 ; i < n;i++){
        		if(n%i == 0){
            		a = i ; 
            		break; 
        		}
    		} 
 	    	cout<<(n/a)<<" "<<(n - (n/a))<<endl;
 	    }
	}

	return 0;
}
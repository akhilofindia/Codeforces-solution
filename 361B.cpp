#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
    cin>>n>>k;
    if(n==k){
    	cout<<-1<<endl;
    }else{
        cout<<n-k<<" ";
        for(int i=1;i<=n;i++){
            if(i!=n-k){
        	   cout<<i<<" ";
            }
        }  
    }
	return 0;
}
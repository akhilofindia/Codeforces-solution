#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int a,n,m;
		int sum=0;
    	cin>>n>>m;
    	for(int i=0;i<n;i++){
    		cin>>a;
            sum+=a;
        }
    	if(sum>m){
    		cout<<sum-m<<endl;
    	}
    	else 
    		cout<<0<<endl;
    }

	return 0;
}
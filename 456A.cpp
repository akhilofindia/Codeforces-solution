#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a!=b){
    	    count=1;
    	    break;
	    }
    }
	if (count){
    	cout<<"Happy Alex"<<endl; 
	}else
	    cout<<"Poor Alex"<<endl;
	

	return 0;
}
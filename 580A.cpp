#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
    int arr[n];
    int a = INT_MIN;
    int count=0,ans=0;
    for (int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    	if (arr[i]>=a){
    		count++;
    	}else{
    	    count=1;
    	}
    	a=arr[i];
    	if (count>ans){
    		ans=count;
    	}
    }
   	cout<<ans<<endl;
   	
	return 0;
}
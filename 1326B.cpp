#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
       cin>>arr[i];
    }
    cout<<arr[0]<<" ";
    int ans=arr[0];
    for(int i = 1 ; i < n ;i++){
        if(arr[i]<0){
           cout<<ans+arr[i]<<" ";
        }else{
           cout<<ans+arr[i]<<" ";
           ans=ans+arr[i];
        }
    }

	return 0;
}
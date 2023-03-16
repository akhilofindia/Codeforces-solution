#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]==1 && arr[i]==0 && arr[i+1]==1){
           count++;
           arr[i+1]=0;
        }
    }
    cout<<count<<endl;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
        int arr[n];
        for (int i = 1; i <= n; i++){
            cin>>arr[i];
        }
        for (int i = 1; i <= n; i++)
          if(arr[1]!=arr[2] && arr[1]!=arr[3]){
          	cout<<1<<endl; 
          	break;
          }
          else if(arr[i]!=arr[i+1]){
          	cout<<i+1<<endl;
            break;
        }	
	}

	return 0;
}
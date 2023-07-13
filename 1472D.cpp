#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int arr[n];
	    long long a=0,b=0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    reverse(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(arr[i]%2==0){
	            	a+=arr[i];
	            }
	        }
	        else{
	            if(arr[i]%2==1){
	            	b+=arr[i];
	            }
	        }
	    }
	    if(a==b){
	        cout << "Tie"<<endl;
	    }
	    else if(a>b){
	        cout << "Alice"<<endl;
	    }
	    else
	        cout << "Bob"<<endl;
	}
	return 0;
}
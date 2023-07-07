#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; i++)
	{ 
		cin>>arr[i];
	}
    int mx=0;
    int i=0,j=0;
    int sum=0;
    while(j<n){
        sum+=arr[j];
        if (sum<k)
        {
            j++;
        }
        if (sum==k)
        {
            if (j-i+1>mx)
            {
                mx=j-i+1;
            }
            j++;
        }
        if (sum>k)
        {
            while(sum>k){
                sum-=arr[i];
                i++;
            }
            j++;
        }
    }
	cout<<mx<<endl;

	return 0;
}
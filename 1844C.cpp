#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while(tc--){
        long long n;cin>>n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long odd=0,even=0;
        for (long long i = 0; i < n; i++)
        {
            if (i%2==0)
            {
                if (arr[i]>0)
                {
                    even+=arr[i];
                }
            }else{
                if (arr[i]>0)
                {
                    odd+=arr[i];
                }
            }
        }
        long long ans=max(odd,even);
        if (ans==0)
        {
            sort(arr,arr+n);
            ans=arr[n-1];
        }

        cout<<ans<<endl;
    }

    return 0;
}
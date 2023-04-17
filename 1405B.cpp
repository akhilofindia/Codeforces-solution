#include <bits/stdc++.h>
using namespace std;

int main(){
    long long tc;
    cin >> tc;
    while(tc--){
        long long n,sum=0,mini=0;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(sum<0)
            {
                mini=min(sum,mini);
            }
        }
        cout<<abs(mini)<<endl;
    }

    return 0;
}
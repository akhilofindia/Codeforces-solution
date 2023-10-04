#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        int ans=0,i=0;
        while(ans<n){
            i++;
            if (i%3!=0 && i%10!=3)
            {
                ans++;
            }
        }
        cout<<i<<endl;
    }

    return 0;
}
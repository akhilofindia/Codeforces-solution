#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            cout<<s[n-1];
        }
        cout<<endl;
    }

    return 0;
}
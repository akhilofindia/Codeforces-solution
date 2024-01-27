#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n,k; cin>>n>>k;
        string s="abcdefghijklmnopqrstuvwxyz";
        string ss="";
        for (int i = 0; i < n*k; i++)
        {
            ss+=s[i%k];
        }
        cout<<ss<<endl;
    }

    return 0;
}
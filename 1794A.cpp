#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string ans[2];
        int j=0;
        string ans2[2*n-2];
        for (int i = 0; i<2*n-2;i++){
            cin >> ans2[i];
            if(ans2[i].size()==n-1){
                ans[j]=ans2[i];
                j++;
            }
        }
        reverse(ans[1].begin(),ans[1].end());
        if(ans[1]==ans[0]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
 
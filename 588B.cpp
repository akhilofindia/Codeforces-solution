#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn=INT_MAX, mn1=INT_MAX, mn2=INT_MAX;
        for(int i=0;i<n;i++){
            int t;
            string s;
            cin>>t>>s;
            if(s[0]=='1'&&s[1]=='1'){
                mn = min(t, mn);
                mn1 = min(t, mn1);
                mn2 = min(t, mn2);
            }else if(s[0]=='1'){
            	mn1 = min(t, mn1);
            }else if(s[1]=='1'){
            	mn2 = min(t, mn2);
            }
        }
        if(mn1==INT_MAX || mn2==INT_MAX)cout<<-1<<'\n';
        else{
            mn = min(mn,mn1+mn2);
            cout<<mn<<endl;
        }
    }
}
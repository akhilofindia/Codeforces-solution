#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        long long max,mini;
        cin>>n;
        if(n>=4){ 
            if(n%2!=0){
                cout<<-1<<endl;
        }else{
            max=n/4;
            mini=0;
            if(n%6==0){
                mini=n/6;
            }else{
                mini=n/6+1;
            }
            cout<<mini<<" "<<max<<endl;
            }
        }
        else 
            cout<<"-1"<<endl;
    
    }

    return 0;
}
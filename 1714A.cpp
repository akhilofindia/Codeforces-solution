#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,h,m; 
        cin>>n>>h>>m;
        int a=h*60+m;
        int x=1440;
        for (int i = 0; i < n; i++)
        {
            int h,m; 
            cin>>h>>m;
            int b=h*60+m;
            if(a>b){
                b+=1440;
            }
            x=min(x,b-a);
        }
        cout<<x/60<<" "<<x%60<<endl;
    }

    return 0;
}
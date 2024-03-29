#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool f(int n){
    while(n>0){
        int ok=n%10;
        if(ok==0 || ok==1){
            n=n/10;
            continue;
        }
        return false;
    }
    return true;
}
 
int main(){
    int tc;cin>>tc;
    vector<int>v;
    for (int i = 1; i <= 1e5; i++)
    {
        if (f(i))
        {
            v.push_back(i);
        }
    }
    while(tc--){
        int n; cin>>n;
        int x=v.size()-1;
        while(x>=0 && n>0 ){
            if (v[x]!=1 && n%v[x]==0)
            {
                n/=v[x];
            }else{
                x--;
            }
        }
        if (n>1)
        {
            cn;
        }else cy;
    }

    return 0;
}
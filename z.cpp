#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int n,m ; cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        if ((m+(i%m))%2==1)
        {
            cout<<(m+i%m+1)/2<<endl;
        }else{
            cout<<(m-i%m)/2<<endl;
        }
    }

    return 0;
}
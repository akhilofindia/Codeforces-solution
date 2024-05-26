#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        map<pair<ll,ll>,ll>xy,yz,xz;
        map<vector<ll>,ll> mp1,mp2,mp3; 
        ll cnt=0;
        for (ll i = 0; i < n-2; i++)
        {
            ll x=v[i];
            ll y=v[i+1];
            ll z=v[i+2];
            xy[{x,y}]++;
            yz[{y,z}]++;
            xz[{x,z}]++;
            mp1[{x,y,z}]++;            //xy
            mp2[{y,z,x}]++;            //yz 
            mp3[{x,z,y}]++;            //xz
            //kitni bar two element same arhe lekin third element diff h
            cnt+=xy[{x,y}]-mp1[{x,y,z}];
            cnt+=yz[{y,z}]-mp2[{y,z,x}];
            cnt+=xz[{x,z}]-mp3[{x,z,y}];
        }
        cout<<cnt<<endl;

    }

    return 0;
}
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
        ll n,k; cin>>n>>k;
        vector<ll>v(n),vi(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            vi[i]=v[i];
        }
        sort(vi.begin(),vi.end());
        ll temp=k,wins=0,mx=0;
        for (ll i = 0; i < n; i++)
        {
            if (vi[i]>temp)
            {
                break;
            }else{
                mx=vi[i];    //jisko skip krne wle h
                wins++;
                temp-=vi[i]; //leftover coins
            }
        }
        // cout<<wins<<" "<<mx<<endl;
        if (wins==n)
        {
            cout<<1<<endl;
        }else if (temp+mx>=v[wins])     //apna competitor se compare
        {
            cout<<n-wins<<endl; 
        }else{
            cout<<n-wins+1<<endl;
        }
    }

    return 0;
}
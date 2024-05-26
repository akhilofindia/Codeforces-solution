#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool f(int ok,int n,vector<int>&v){
    for (int i = ok; i < n; i++)
    {
        int x=0,y=0;
        for (int j = i-ok; j < i; j++)
        {
            x|=v[j];
            y|=v[j+1];
        }
        if (x!=y)
        {
            return false;
        }
    }
    return true;
}

int main(){
    ll tc;cin>>tc;
    while(tc--){
        ll n;cin>>n;
        vector<int>arr(n);
        for (ll i = 0; i < n; i++) 
        {
            cin>>arr[i];
        }
        ll low=1,high=n;
        ll ans=n;
        while(low<=high){
            ll mid=low+(high-low)/2;
            ll flag=0;
            if (f(mid,n,arr))
            {
                high=mid-1;
                ans=mid;
            }else {
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
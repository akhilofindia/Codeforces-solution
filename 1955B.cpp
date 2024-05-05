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
        ll n,c,d; cin>>n>>c>>d;
        ll m=n*n;
        ll arr[m];
        multiset<ll>st;
        sort(arr,arr+m);
        for (ll i = 0; i < m; i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        ll ok=0;
        vector<ll>temp;
        ll flag=0;
        while(ok<n){
            ll ans=*st.begin();
            temp.push_back(ans);
            for (ll j = 0; j < n; j++)
            {
                auto z=st.find(ans);
                if (z==st.end())
                {
                    flag=1;
                    break;
                }else{
                    st.erase(z);
                    ans+=c;
                }
            }
            if (flag)
            {
                break;
            }
            ok++;
        }
        for (int i = 0; i < temp.size()-1; i++)
        {
            if (temp[i]+d!=temp[i+1])
            {
                flag=1;
                break;
            }
        }
        if (flag)
        {
            cn;
        }else cy;
    }

    return 0;
}
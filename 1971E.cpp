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
        ll n,x,q;
        cin>>n>>x>>q;
        vector<ll>v(x),vi(x);
        for (ll i = 0; i < x; i++)
        {
            cin>>v[i];
        }
        for (ll i = 0; i < x; i++)
        {
            cin>>vi[i];
        }
        while(q--){
            ll ok; cin>>ok;
            auto it=lower_bound(v.begin(),v.end(),ok);
            ll ans=it-v.begin();
            if (v[ans]==ok && x>ans)    //direct arrival time given
            {
                cout<<vi[ans]<<" ";
            }else{                      //calculate arrival time
                ll cnt1,cnt2,cnt3,cnt4;
                if (ans)
                {
                    cnt1=v[ans-1];
                    cnt2=vi[ans-1];
                }else{
                    cnt1=0;
                    cnt2=0;
                }
                cnt3=v[ans];
                cnt4=vi[ans];
                cout<<(ok-cnt1)*(cnt4-cnt2)/(cnt3-cnt1)+cnt2<<" ";
            }
            // cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
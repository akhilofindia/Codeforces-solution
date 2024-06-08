#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll orig[n];
        ll found[n];
        for (ll i = 0; i < n; i++) 
        {
            cin>>orig[i];
        }
        map<ll,ll>mp,mp2;
        for (ll i = 0; i < n; i++) 
        {
            cin >> found[i];
            mp2[found[i]]++;
        }
        ll mod; cin>>mod;
        ll d[mod];
        for (ll i = 0; i < mod; i++)
        {
            cin>>d[i];
            mp[d[i]]++;
        }
        ll flag=0;
        if (!mp2.count(d[mod-1]))
        {
            flag=1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (orig[i]!=found[i])
            {
                if (!mp.count(found[i]))
                {
                    flag=1;
                    break;
                }else{
                    mp[found[i]]--;
                    if (mp[found[i]]==0)
                    {
                        mp.erase(found[i]);
                    }
                }
            }
        }
        if (flag==0) 
        {
            cy;
        } else {
            cn;
        }
    }

    return 0;
}

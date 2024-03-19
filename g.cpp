#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    string s;cin>>s;
    vector<ll>v(26,0);
    for (ll i = 0; i < s.size(); i++)
    {
        v[s[i]-'a']++;
    }
    ll cnt=0;
    for (ll i = 0; i < 26; i++)
    {
        if (v[i]>1)
        {
            cnt=1;
            break;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        for (ll j = i+1; j < 26; j++)
        {
            cnt+=(v[i]*v[j]);
        }
    }
    cout<<cnt<<endl;

    return 0;
}
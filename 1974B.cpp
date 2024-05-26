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
        ll n;cin>>n;
        string s; cin>>s;
        set<char>st;
        map<char,char>mp;
        for (ll i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }
        vector<char> v(st.begin(), st.end());
        sort(v.begin(),v.end());
        vector<char>ans(v);
        reverse(ans.begin(),ans.end());
        for (ll i = 0; i < v.size(); i++)
        {
            mp[v[i]]=ans[i];
        }
        string final;
        for (char i: s)
        {
            final+=mp[i];
        }
        cout<<final<<endl;

    }

    return 0;
}
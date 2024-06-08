#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        ll cnt = 0;
        vector<ll>v;
        for (ll i = 0; i < s.size();i++) 
        {
            if (i<=s.size()-5 && s.substr(i,5) == "twone") {
                cnt++;
                v.push_back(i+2+1);
                i+=4;
            }else if (i<=s.size()-3 && s.substr(i,3) == "one") {
                cnt++;
                v.push_back(i+1+1);
                i+=2;
            } else if (i<=s.size()-3 && s.substr(i,3) == "two") {
                cnt++;
                v.push_back(i+2);
                i+=2;
            }
        }
        cout<<cnt<<endl;
        for (ll i = 0; i < v.size(); i++) 
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2> void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

ll dp[2050][2050];
ll f(vector<ll>& cost, vector<ll>& hap, ll cur, ll sal, ll ind, ll n){
    if (ind==n) {
        return 0;
    }
    if (dp[ind][cur] != -1) {
        return dp[ind][cur];
    }
    ll notpick = f(cost,hap,cur+sal, sal, ind+1,n);
    ll pick = -1;
    if (cost[ind] <= cur) {
        pick = hap[ind] + f(cost,hap,cur-cost[ind]+sal, sal, ind+1,n);
    }
    return dp[ind][cur] = max(pick,notpick);
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll n, sal;
        cin>>n>>sal;
        memset(dp, -1, sizeof(dp));  
        vector<ll> cost(n);
        vector<ll> hap(n);
        for (ll i = 0; i < n; i++) {
            cin>>cost[i];
            cin>>hap[i];
        }
        ll ans = f(cost,hap,0,sal,0,n);
        cout << ans << endl;
    }

    return 0;
}

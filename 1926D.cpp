#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main() {
    int tc;
    cin >> tc;
    int x = (1<<31)-1;
    while(tc--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin>>arr[i];
        }
        multiset<ll> st;
        int cnt=0;
        for (ll i = 0; i < n; i++) {
            auto it = st.find(x^arr[i]);
            if (it != st.end()) {
            	cnt++;
                st.erase(it);
            } else{
                st.insert(arr[i]);
            }
        }
        cout <<cnt+st.size()<< endl;
    }

    return 0;
}

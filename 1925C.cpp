#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main() {
    int tc ; cin>>tc;
    while (tc--) {
        int n, k, m;
        cin >> n >> k >> m;
        string s; cin >> s;
        vector<int> v(k, 0);
        int cnt = 0;
        string ss = "";
        for (int i=0; i<s.size(); i++) {
            v[s[i]-'a']++;
            bool flag = true;
            for (int j : v) {
                if (j == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int j = 0; j < k; ++j) {
                    v[j] = 0;
                }
                cnt++;
                ss+=s[i];
            }
        }
        if (cnt >= n) {
            cout << "YES" <<endl;
        }else {
            cout << "NO" <<endl;
            cnt = n-cnt;
            int z = 0;
            for (int i = 0; i < k; ++i) {
                if (v[i] == 0) {
                    z = i;
                    break;
                }
            }
           cout << ss << string(cnt,'a'+z) <<endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

    string clearStars(const string &s) {
        map<char,stack<int>> mp;
        vector<int> v;
        string ss;
        for (int ind = 0; ind < s.length(); ++ind) {
            char c = s[ind];
            if (c == '*'){
                for (char i = 'a'; i <= 'z'; ++i) {
                    if (mp.count(i) && !mp[i].empty()) {
                        v.push_back(mp[i].top());
                        mp[i].pop();
                        break;
                    }
                }
                v.push_back(ind);
            } else {
                mp[c].push(ind);
            }
        }
        sort(v.begin(), v.end());
        int i = 0, j = 0;
        while (j < s.length()) {
            if (i < v.size() && v[i] == j) {
                i++;
            } else {
                ss+=s[j];
            }
            j++;
        }
        return ss;
    }


int main(){
    string s;cin>>s;
    string ans=clearStars(s);
    cout<<ans<<endl;

    return 0;
}
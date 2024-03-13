#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define disp(a, x) for (auto x : a) cout << x << " ";

template<typename T1, typename T2>
void displayMap(map<T1, T2> mp) {
    for (auto it : mp) {
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        set<int> st;
        st.insert(x);
        for (int i = 0; i < m; i++) {
            int dis;
            char s;
            cin >> dis >> s;
            set<int> temp;
            if (s == '0') {
                for (auto pos : st) {
                    int clock = (pos + dis) % n;
                    if (clock == 0) {
                        clock = n;
                    }
                    temp.insert(clock);
                }
            } else if(s=='1') {
                for (auto pos : st) {
                    int counter = (pos + (n - dis)) % n;
                    if (counter == 0) {
                        counter = n;
                    }
                    temp.insert(counter);
                }
            }else{
                for (auto pos : st) {
                    int clock = (pos + dis) % n;
                    if (clock == 0) {
                        clock = n;
                    }
                    int counter = (pos + (n - dis)) % n;
                    if (counter == 0) {
                        counter = n;
                    }
                    temp.insert(clock);
                    temp.insert(counter);
                }
            }
            st = temp;
        }
        cout << st.size() << endl;
        for (auto x : st) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

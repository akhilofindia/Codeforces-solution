#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";
#define ce cout<<endl;
#define int long long

template<typename T> void displayVec(vector<T> a) { for (int i = 0; i < a.size(); i++) cout << a[i] << " "; cout << endl; }
template<typename T> void displayArr(T a[], int n) { for (int i = 0; i < n; i++) cout << a[i] << " "; cout << endl; }
template<typename T> void displayAdj(vector<T> adj[], int n) { for (int i = 0; i <= n; i++) { cout << i << "->"; displayVec(adj[i]); } }
template<typename T1, typename T2> void displayMap(map<T1, T2> mp) { for (auto it : mp) { cout << it.first << "->" << it.second << endl; } cout << endl; }
template<typename T> void displaySet(set<T> st) { for (auto it : st) { cout << it << " "; } cout << endl; }
template<typename T> void displayQueue(queue<T> q) { while (!q.empty()) { cout << q.front() << " "; q.pop(); } cout << endl; }
template<typename T> void displayPQ(priority_queue<T> pq) { while (!pq.empty()) { cout << pq.top() << " "; pq.pop(); } cout << endl; }

signed main() {
    int tc;cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<vector<char>> ok(2, vector<char>(n));
        for (int i = 0; i < 2; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cin>>ok[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                if (j+2 < n && i+1 < 2 && ok[i][j] == 'x' && ok[i][j+2] == 'x' && ok[i][j+1] == '.' && ok[i+1][j+1] == '.' && ok[i+1][j] == '.' && ok[i+1][j+2] == '.') {
                    cnt++;
                }
                if (i-1>=0 && j+2 < n && ok[i][j] == 'x' && ok[i][j+2] == 'x' && ok[i][j+1] == '.' && ok[i-1][j] == '.' && ok[i-1][j+1] == '.' && ok[i-1][j+2] == '.') {
                     cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

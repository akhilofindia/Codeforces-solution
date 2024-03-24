#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int h,w,m;
    cin>>h>>w>>m;
    vector<pair<int,pair<int, int>>>v(m);
    for (int i = 0; i < m; ++i) {
        int t, a, x;
        cin >> t >> a >> x;
        v[i] = make_pair(t, make_pair(a, x));
    }
    reverse(v.begin(), v.end());
    set<int> strows, stcol;
    vector<int> vi(200005);
    int remrows = h, remcols = w;
    for (auto it = v.begin(); it != v.end(); ++it) {
        int t = it->first;
        int a = it->second.first;
        int x = it->second.second;
        if (t == 1) {
            if (!strows.count(a)) {
                vi[x] += remcols;
                strows.insert(a);
                remrows--;
            }
        } else {
            if (!stcol.count(a)) {
                vi[x] += remrows;
                stcol.insert(a);
                remcols--;
            }
        }
    }
    vi[0] += remrows * remcols;
    vector<pair<int, int>> ans;
    for (int i = 0; i < vi.size(); ++i) {
        if (vi[i] > 0) {
            ans.push_back({i, vi[i]});
        }
    }
    cout << ans.size() << endl;
    for (auto it = ans.begin(); it != ans.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

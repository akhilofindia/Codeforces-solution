#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin >> i
#define mod 1000000007

int solve(int n) {
    vector<int> v={-1,1,2,1,2,3,1,2,3,2,1,2,2,2,3,1};
    int mul = n / 15;
    int behind = mul * 15;
    int ans = INT_MAX;
    int rem = n - behind;

    if (rem == 0) {
        ans = mul;
    } else {
        ans = min(ans, v[rem] + mul);
    }

    for (int i = 0; i < 3; i++) {
        behind = behind - 5;
        rem = n - behind;

        if (rem <= 15 and behind >= 0) {
            ans = min(ans, v[rem] + mul);
        } else {
            break;
        }
    }

    return ans;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int result = solve(n);
        cout << result << endl;
    }

    return 0;
}

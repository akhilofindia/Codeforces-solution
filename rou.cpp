#include <iostream>
#define int long long
const int MOD = 1e9+7;

int modpower(int x, int y, int mod) {
    int res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1) res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}

int32_t main() {
    int t;
    std::cin >> t;
    while (t--) {
        int l, r, k;
        std::cin >> l >> r >> k;

        int valid_numbers = 0;

        if (k < 10) {
            int av = 10 / k;
            if (10 % k) {
                av++;
            }
            int rt = modpower(av, r, MOD);
            int lt = modpower(av, l, MOD);
            valid_numbers = (rt - lt + MOD) % MOD;
        }
        
        std::cout << valid_numbers << std::endl;
    }
    return 0;
}

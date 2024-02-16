#include <iostream>

long long next_bet(long long cur_loss, long long k) {
    return (cur_loss + k - 1) / (k - 1);
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        long long k, x, a;
        std::cin >> k >> x >> a;

        long long u = 0;
        int ok = 1;

        for (int i = 0; i < x; i++) {
            long long v = next_bet(u, k);
            u += (v == 0);
            if (v != 0) {
                u += v;
            }

            if (!(u <= a)) {
                ok = 0;
                break;
            }
        }

        if (k * (a - u) > a) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}

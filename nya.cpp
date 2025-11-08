#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        long long c;
        cin >> c;
        // number of bits of c (c > 0)
        int L = 64 - __builtin_clzll(c);   // floor(log2(c)) + 1

        long long a = c;
        long long b = c << L;              // c * 2^L, fits into 64 bits

        cout << a << ' ' << b << '\n';
    }
    return 0;
}
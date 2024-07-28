class Solution {
public:
    vector<int> sieve(int ok) {
        vector<bool> is_prime(ok + 1, true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i <= ok; ++i) {
            if (is_prime[i]) {
                for (int j = i * i; j <= ok; j += i) {
                    is_prime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= ok; ++i) {
            if (is_prime[i]) {
                primes.push_back(i);
            }
        }
        return primes;
    }
    int nonSpecialCount(int l, int r) {
        int ok = sqrt(r);
        vector<int> primes = sieve(ok);
        vector<bool> is_special(r-l+1, false);
        for (int prime : primes) {
            long long square = (long long)prime * prime;
            if (square>r) break;
            if (square>=l) {
                is_special[square - l] = true;
            }
        int special_count = 0;
        for (int i = 0; i <= r-l; ++i) {
            if (is_special[i]) {
                special_count++;
            }
        }
        int total = r-l+1;
        return total-special_count;
    }
};
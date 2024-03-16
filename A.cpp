#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestDividingSubsequence(vector<int>& sequence) {
    int n = sequence.size();
    vector<int> best(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (sequence[i] % sequence[j] == 0) {
                best[i] = max(best[i], best[j] + 1);
            }
        }
    }

    int max_length = 0;
    for (int i = 0; i < n; ++i) {
        max_length = max(max_length, best[i]);
    }

    return max_length;
}

int main() {
    int N;
    cin >> N;

    vector<int> sequence(N);
    for (int i = 0; i < N; ++i) {
        cin >> sequence[i];
    }

    int result = longestDividingSubsequence(sequence);
    cout << result << endl;

    return 0;
}

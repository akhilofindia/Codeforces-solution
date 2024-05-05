#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findMinimumDifference(const vector<int>& P, int K) {
    int N = P.size();
    unordered_map<int, int> indexMap;
    int minDiff = N + 1;
    
    for (int i = 0; i < N; ++i) {
        indexMap[P[i]] = i;
    }
    
    int left = 0, right = 0;
    while (right < N) {
        if (right - left + 1 == K) {
            vector<int> indices;
            for (int i = left; i <= right; ++i) {
                indices.push_back(indexMap[i + 1]);
            }
            sort(indices.begin(), indices.end());
            minDiff = min(minDiff, indices.back() - indices.front());
            ++left;
        }
        ++right;
    }
    
    return minDiff;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }
    
    int result = findMinimumDifference(P, K);
    cout << result << endl;
    
    return 0;
}

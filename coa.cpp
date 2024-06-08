#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Map to store possible numbers and a vector to store the number of operations
    map<int, vector<int>> num_operations;

    // Generate all possible transformations for each number
    for (int num : a) {
        int steps = 0;
        while (num > 0) {
            num_operations[num].push_back(steps);
            num /= 2;
            steps++;
        }
        num_operations[0].push_back(steps); // finally, each number can be turned into 0
    }

    int min_operations = INT_MAX;

    // Check each possible number's operations
    for (auto& i : num_operations) {
        int number = i.first;
        vector<int>& ops_vector = i.second;
        if (ops_vector.size() >= k) {
            sort(ops_vector.begin(), ops_vector.end());
            int operations_sum = 0;
            for (int i = 0; i < k; ++i) {
                operations_sum += ops_vector[i];
            }
            min_operations = min(min_operations, operations_sum);
        }
    }

    cout << min_operations << endl;
    return 0;
}

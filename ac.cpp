#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<long long, long long> mp; // Map to store indices of elements
    long long mn = n + 1;
    long long left = 0;

    for (long long right = 0; right < n; right++) {
        mp[arr[right]] = right;

        // If the size of the window exceeds k, adjust the left pointer
        if (right - left + 1 > k) {
            // Remove the leftmost element from the map
            mp.erase(arr[left]);
            left++; // Move the left pointer to the right
        }

        // If the size of the window becomes k, update the minimum difference
        if (right - left + 1 == k) {
            auto it = mp.end(); 
            auto it2 = mp.begin();
            // Check if the element at it2 is still in the window
            if (it2->second < left) {
                it2++;
            }
            mn = min(mn, it->second - it2->second + 1); // Update the minimum difference
        }
    }

    cout << mn << endl;

    return 0;
}

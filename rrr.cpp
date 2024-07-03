#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to simulate the game and return the number of cakes Alice can eat
int simulateGame(const vector<int>& a) {
    int n = a.size();
    int aliceCakes = 0;
    int bobCakes = 0;
    
    for (int i = 0; i < n; ++i) {
        if (i == 0 || a[i] > aliceCakes) {
            aliceCakes++;
        } else {
            bobCakes++;
        }
    }
    
    return aliceCakes;
}

// Function to generate all subsets using bitmasking
vector<vector<int>> generateSubsets(const vector<int>& a) {
    int n = a.size();
    vector<vector<int>> subsets;
    
    // Generate all subsets using bitmasking
    for (int mask = 0; mask < (1 << n); ++mask) {
        vector<int> subset;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset.push_back(a[i]);
            }
        }
        subsets.push_back(subset);
    }
    
    return subsets;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Generate all subsets of the array 'a'
        vector<vector<int>> subsets = generateSubsets(a);
        
        int maxCakesAliceCanEat = 0;
        
        // Iterate through all subsets and find the maximum number of cakes Alice can eat
        for (const auto& subset : subsets) {
            // Simulate the game for the current subset
            int cakesAliceCanEat = simulateGame(subset);
            // Update maxCakesAliceCanEat if we found a larger value
            if (cakesAliceCanEat > maxCakesAliceCanEat) {
                maxCakesAliceCanEat = cakesAliceCanEat;
            }
        }
        
        cout << maxCakesAliceCanEat << endl;
    }
    
    return 0;
}

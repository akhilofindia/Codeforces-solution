#include <iostream>
#include <vector>

using namespace std;

bool canReachDestination(int n, vector<string>& s) {
    // Start from cell (0, 0)
    int row = 0, col = 0;

    while (true) {
        // Check if the robot has reached the destination cell
        if (row == 1 && col == n - 1)
            return true;

        // Check if the current position is out of bounds
        if (row < 0 || row >= 2 || col < 0 || col >= n)
            return false;

        // Check if either the cell to the right or the cell below has an arrow pointing to the right
        bool hasRightNeighbor = false;
        if (col < n - 1 && s[row][col + 1] == '>')
            hasRightNeighbor = true;
        if (row < 1 && s[row ^ 1][col] == '>')
            hasRightNeighbor = true;

        // If either neighbor has an arrow pointing to the right, move in a zigzag pattern
        if (hasRightNeighbor) {
            if (row % 2 == 0)
                row++;
            else
                row--;
        } else {
            return false; // If neither neighbor has an arrow pointing to the right, it's impossible to reach the destination
        }

        // Move right if the arrow points to the right, otherwise move left
        if (s[row][col] == '>')
            col++;
        else
            col--;

        // Check if the new position is within the grid bounds
        if (row < 0 || row >= 2 || col < 0 || col >= n)
            return false;
    }

    return false; // To suppress compiler warning
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> s(2);
        cin >> s[0] >> s[1];

        // Check if the robot can reach the destination cell
        bool result = canReachDestination(n, s);
        if (result)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        vector<int> freq(total + 1, 0);
        int repeated = -1, missing = -1;

        // Count frequency of each number
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                freq[grid[i][j]]++;
            }
        }

        // Find missing and repeated based on frequency count
        for (int i = 1; i <= total; ++i) {
            if (freq[i] == 0) missing = i;
            else if (freq[i] == 2) repeated = i;
        }

        return {repeated, missing};
    }
};

int main() {
    int n;
    cout << "Enter grid size n: ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    cout << "Enter grid elements (" << n * n << " total):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];

    Solution sol;
    vector<int> result = sol.findMissingAndRepeatedValues(grid);

    cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
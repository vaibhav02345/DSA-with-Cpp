#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long total = n * n;

        // Calculate expected sum and expected square sum
        long long expectedSum = total * (total + 1) / 2;
        long long expectedSquareSum = total * (total + 1) * (2 * total + 1) / 6;

        long long actualSum = 0, actualSquareSum = 0;

        // Calculate actual sum and square sum from grid
        for (auto& row : grid) {
            for (int val : row) {
                actualSum += val;
                actualSquareSum += 1LL * val * val;
            }
        }

        long long diff = actualSum - expectedSum;                  // x - y
        long long squareDiff = actualSquareSum - expectedSquareSum; // x^2 - y^2 = (x - y)(x + y)

        long long sumXY = squareDiff / diff;                       // x + y

        int repeated = (diff + sumXY) / 2;
        int missing = repeated - diff;

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

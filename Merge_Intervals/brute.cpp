#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<bool> merged(n, false);
    vector<vector<int>> result;

    for (int i = 0; i < n; ++i) {
        if (merged[i]) continue;
        int start = intervals[i][0];
        int end = intervals[i][1];

        for (int j = i + 1; j < n; ++j) {
            // Check for overlap
            if (!merged[j] && !(intervals[j][0] > end || intervals[j][1] < start)) {
                start = min(start, intervals[j][0]);
                end = max(end, intervals[j][1]);
                merged[j] = true;
            }
        }

        result.push_back({start, end});
    }

    // Sort final merged intervals (not mandatory but cleaner)
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>> merged = mergeIntervals(intervals);

    cout << "Merged Intervals:\n";
    for (auto interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
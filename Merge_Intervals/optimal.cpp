#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());  // Sort by start time

    vector<vector<int>> merged;

    for (const auto& interval : intervals) {
        // If no overlap with the last interval
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        } else {
            // Overlap exists — merge it
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }

    return merged;
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

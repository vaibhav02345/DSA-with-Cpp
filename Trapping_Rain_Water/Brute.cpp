#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int water = 0;

    for (int i = 0; i < n; i++) {
        int left_max = 0, right_max = 0;

        // find maximum height to the left of i (including i)
        for (int j = i; j >= 0; j--) {
            left_max = max(left_max, height[j]);
        }

        // find maximum height to the right of i (including i)
        for (int j = i; j < n; j++) {
            right_max = max(right_max, height[j]);
        }

        // water above bar i = min(left_max, right_max) - height[i]
        water += min(left_max, right_max) - height[i];
    }
    return water;
}

int main() {
    // Example 1
    vector<int> height1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped Water (Example 1): " << trap(height1) << endl; // Expected 6

    // Example 2
    vector<int> height2 = {4,2,0,3,2,5};
    cout << "Trapped Water (Example 2): " << trap(height2) << endl; // Expected 9

    return 0;
}
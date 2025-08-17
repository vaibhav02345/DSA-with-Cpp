#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int l = 0, r = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (l < r) {
        if (height[l] < height[r]) {
            if (height[l] >= leftMax) {
                leftMax = height[l];  // update leftMax
            } else {
                water += leftMax - height[l];  // water trapped at l
            }
            l++;
        } else {
            if (height[r] >= rightMax) {
                rightMax = height[r];  // update rightMax
            } else {
                water += rightMax - height[r];  // water trapped at r
            }
            r--;
        }
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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int area = width * h;
            maxArea = max(maxArea, area);

            // Move the pointer pointing to the shorter line
            height[left] < height[right] ? left++ : right--;
        }

        return maxArea;
    }
};

int main() {
    int n;
    cout << "Enter number of vertical lines: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights:\n";
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    Solution sol;
    int result = sol.maxArea(height);
    cout << "Maximum water that can be contained: " << result << endl;

    return 0;
}

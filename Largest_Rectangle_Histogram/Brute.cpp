#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        int height = heights[i];
        int left = i, right = i;

        // expand left
        while (left > 0 && heights[left - 1] >= height) {
            left--;
        }

        // expand right
        while (right < n - 1 && heights[right + 1] >= height) {
            right++;
        }

        int width = right - left + 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}

int main() {
    vector<int> heights1 = {2, 1, 5, 6, 2, 3};
    vector<int> heights2 = {2, 4};

    cout << " Results:" << endl;
    cout << "Case 1: " << largestRectangleArea(heights1) << endl; // 10
    cout << "Case 2: " << largestRectangleArea(heights2) << endl; // 4

    return 0;
}
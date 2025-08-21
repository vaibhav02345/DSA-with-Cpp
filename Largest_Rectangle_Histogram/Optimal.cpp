#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    for (int i = 0; i <= n; i++) {
        int h = (i == n ? 0 : heights[i]);

        while (!st.empty() && h < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();

            int width = st.empty() ? i : (i - st.top() - 1);
            maxArea = max(maxArea, height * width);
        }

        st.push(i);
    }

    return maxArea;
}

int main() {
    vector<int> heights1 = {2, 1, 5, 6, 2, 3};
    vector<int> heights2 = {2, 4};

    cout << "Results:" << endl;
    cout << "Case 1: " << largestRectangleArea(heights1) << endl; // 10
    cout << "Case 2: " << largestRectangleArea(heights2) << endl; // 4

    return 0;
}
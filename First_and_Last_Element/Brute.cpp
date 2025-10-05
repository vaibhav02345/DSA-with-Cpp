#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;

        // Traverse the array to find first and last occurrences
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (first == -1) first = i; // first time found
                last = i; // update till last occurrence
            }
        }

        return {first, last};
    }
};

int main() {
    int n, target;
    cout << "Enter number of elements in the sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter the target element: ";
    cin >> target;

    Solution sol;
    vector<int> result = sol.searchRange(nums, target);

    cout << "\nFirst and Last Position of " << target << ": ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
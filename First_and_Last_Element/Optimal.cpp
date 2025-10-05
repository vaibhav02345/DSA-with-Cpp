#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Find first occurrence using binary search
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, first = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1; // move left
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return first;
    }

    // Find last occurrence using binary search
    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1; // move right
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return last;
    }

    // Main function to return both positions
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
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
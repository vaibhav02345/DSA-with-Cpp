#include <iostream>
#include <vector>
using namespace std;

/*
    Program: Remove Element from Array
    Concept: Two-pointer approach (in-place)
    LeetCode: 27. Remove Element
    Author: BRO's DSA Folder 🚀
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // i will point to the position of next element to keep
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];  // Keep element not equal to val
                i++;
            }
        }
        return i;  // New length after removing val
    }
};

int main() {
    int n, val;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the value to remove: ";
    cin >> val;

    Solution sol;
    int newLength = sol.removeElement(nums, val);

    cout << "\nArray after removing " << val << ":\n";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "\nNew length of array: " << newLength << endl;

    return 0;
}

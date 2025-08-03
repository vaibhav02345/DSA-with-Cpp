#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeOptimal(vector<int> nums1, int m, const vector<int>& nums2, int n) {
    int i = m - 1;          // Pointer for the last element in the valid part of nums1
    int j = n - 1;          // Pointer for the last element in nums2
    int k = m + n - 1;      // Pointer for the final position in nums1

    // Ensure nums1 has enough total space
    nums1.resize(m + n);

    // Compare and insert elements from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If any elements are left in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    // Return the modified nums1
    return nums1;
}

int main() {
    // Example input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    // Call the optimal merge function
    vector<int> result = mergeOptimal(nums1, m, nums2, n);

    // Output the result
    cout << "Merged Array (Optimal): ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
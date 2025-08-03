#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeBrute(vector<int> nums1, int m, const vector<int>& nums2, int n) {
    // Insert nums2 elements into nums1 starting from index m
    for (int i = 0; i < n; ++i) {
        nums1[m + i] = nums2[i];
    }

    // Sort the entire nums1 array
    sort(nums1.begin(), nums1.end());

    // Return the merged and sorted array
    return nums1;
}

int main() {
    // Example input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    // Call the brute force merge function
    vector<int> result = mergeBrute(nums1, m, nums2, n);

    // Output the result
    cout << "Merged Array (Brute): ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
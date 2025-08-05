#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: If such element found, find the element just greater than it from the end
    if (i >= 0) {
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }
        // Swap the two
        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the subarray from i+1 till end to get next permutation
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    cout << "Next Permutation : ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
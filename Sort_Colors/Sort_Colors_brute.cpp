#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count the number of 0s, 1s, and 2s
    for (int num : nums) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }

    // Overwrite the array based on counts
    int index = 0;
    while (count0--) nums[index++] = 0;
    while (count1--) nums[index++] = 1;
    while (count2--) nums[index++] = 2;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
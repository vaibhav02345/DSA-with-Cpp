#include <iostream>
#include <vector>
using namespace std;

int singleNumberBrute(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count == 1) {
            return nums[i];
        }
    }
    return -1; // Should not reach here if input is valid
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumberBrute(nums);
    cout << "Single number (Brute Force): " << result << endl;
    return 0;
}

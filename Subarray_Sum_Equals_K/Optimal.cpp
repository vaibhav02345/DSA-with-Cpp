#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1; // base case

        int currSum = 0, count = 0;
        for (int num : nums) {
            currSum += num;

            if (prefixCount.find(currSum - k) != prefixCount.end()) {
                count += prefixCount[currSum - k];
            }

            prefixCount[currSum]++;
        }
        return count;
    }
};

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << "Enter k: ";
    cin >> k;

    Solution sol;
    int result = sol.subarraySum(nums, k);

    cout << "Result: " << result << endl;

    return 0;
}
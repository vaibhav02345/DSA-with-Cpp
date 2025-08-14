#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int start = 0; start < n; ++start) {
            int sum = 0;
            for (int end = start; end < n; ++end) {
                sum += nums[end];
                if (sum == k) count++;
            }
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
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelfOptimized(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Step 1: Prefix products
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        // Step 2: Suffix products
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) cin >> nums[i];

    Solution sol;
    vector<int> output = sol.productExceptSelfOptimized(nums);

    cout << "Optimized Output: ";
    for (int val : output) cout << val << " ";
    cout << endl;

    return 0;
}

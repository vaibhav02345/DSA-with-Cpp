#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelfBrute(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        for (int i = 0; i < n; ++i) {
            int prod = 1;
            for (int j = 0; j < n; ++j) {
                if (i != j)
                    prod *= nums[j];
            }
            result[i] = prod;
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
    vector<int> output = sol.productExceptSelfBrute(nums);

    cout << "Brute Force Output: ";
    for (int val : output) cout << val << " ";
    cout << endl;

    return 0;
}

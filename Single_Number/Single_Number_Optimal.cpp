#include <iostream>
#include <vector>
using namespace std;

int singleNumberXOR(vector<int>& nums) {
    int ans = 0;
    for (int num : nums) {
        ans ^= num;
    }
    return ans;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumberXOR(nums);
    cout << "Single number (Optimal XOR): " << result << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    set<vector<int>> st;

    // Try all combinations of 4 elements
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int l = k + 1; l < n; ++l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }

    return vector<vector<int>>(st.begin(), st.end());
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) cin >> nums[i];

    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> result = fourSum(nums, target);

    cout << "Quadruplets summing to target:\n";
    for (auto& quad : result) {
        for (int x : quad) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
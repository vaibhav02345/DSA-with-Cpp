#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> nums)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int currSum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            currSum += nums[j];
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;
    return 0;
}

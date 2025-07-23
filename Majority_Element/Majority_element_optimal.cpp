#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums)
{
    int count = 0;
    int element = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            element = nums[i];
        }

        if (nums[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return element;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}

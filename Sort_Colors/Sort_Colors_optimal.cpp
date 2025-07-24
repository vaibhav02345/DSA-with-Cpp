#include <iostream>
#include <vector>
using namespace std;

vector<int> sortColors(vector<int> nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;

    // Traverse the array and sort it in-place
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else // nums[mid] == 2
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    return nums;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    // Call the sort function
    vector<int> sorted = sortColors(nums);

    // Output the sorted array
    cout << "Sorted Colors (Optimal): ";
    for (int num : sorted)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
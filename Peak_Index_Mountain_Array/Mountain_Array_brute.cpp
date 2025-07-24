#include <iostream>
#include <vector>
using namespace std;

// 🚩 Function to find the peak index in a mountain array
int peakIndexMountainArray(vector<int> &arr)
{
    // Traverse the array from second to second-last element
    for (int i = 1; i < arr.size() - 1; i++)
    {
        // Check if current element is greater than both neighbors
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            return i; // Return the peak index
        }
    }
    return -1; // Return -1 if no peak found (should not happen for valid mountain array)
}

int main()
{
    vector<int> arr = {0, 3, 5, 6, 4, 2, 1};

    // Call the function to find the peak index
    int peak = peakIndexMountainArray(arr);

    // Print the result
    cout << "Peak Index : " << peak << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

// 🔍 Function to find the peak index in a mountain array using binary search
int peakIndexMountainArray(vector<int> &arr)
{
    int left = 1;
    int right = arr.size() - 2;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if mid is the peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        // If in decreasing part, move left
        else if (arr[mid] < arr[mid - 1])
        {
            right = mid - 1;
        }
        // If in increasing part, move right
        else
        {
            left = mid + 1;
        }
    }

    return -1; // Should never reach here in a valid mountain array
}

int main()
{
    vector<int> arr = {0, 3, 5, 6, 4, 2, 1};

    // Output the peak index
    cout << "Peak Index : " << peakIndexMountainArray(arr) << endl;

    return 0;
}

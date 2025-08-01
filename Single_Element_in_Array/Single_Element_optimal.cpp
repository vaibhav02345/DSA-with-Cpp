#include <iostream>
#include <vector>
using namespace std;

// Function to find the single element using binary search
int singleElement(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 2; // We go till n - 2 to avoid index out of bounds

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if mid is even or odd
        if (mid % 2 == 0) {
            // If pair is proper, move right
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                // Broken pair, move left
                high = mid - 1;
            }
        } else {
            // If mid is odd
            if (nums[mid] == nums[mid - 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    // At the end, low will point to the single element
    return nums[low];
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 8, 8}; // 4 is the unique element

    int result = singleElement(arr);
    cout << "The single element is: " << result << endl;

    return 0;
}
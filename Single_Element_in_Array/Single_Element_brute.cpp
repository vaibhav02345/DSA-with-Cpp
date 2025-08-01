#include <iostream>
#include <vector>
using namespace std;

// Function to find the single element
int singleElement(vector<int>& nums) {
    int n = nums.size();

    // Edge case: if the array has only one element
    if (n == 1) return nums[0];

    // Traverse the array in steps of 2
    for (int i = 0; i < n - 1; i += 2) {
        // If current element is not equal to the next one
        if (nums[i] != nums[i + 1]) {
            return nums[i]; // This is the single element
        }
    }

    // If all pairs are matched, the single element is at the end
    return nums[n - 1];
}

int main() {
    // Example input: every element appears twice except one
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    // Call the function
    int result = singleElement(arr);

    // Output the result
    cout << "The single element is: " << result << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    // If array is empty, no duplicates
    if (nums.empty()) return 0;

    // i keeps track of the last unique element
    int i = 0;

    // j scans the array for new unique elements
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;                 // Move i forward
            nums[i] = nums[j];   // Update with new unique element
        }
    }

    // The unique elements are from nums[0] to nums[i]
    return i + 1; // New length of array without duplicates
}

int main() {
    int n;
    cout << "Enter number of elements in sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Remove duplicates and get new length
    int newLength = removeDuplicates(nums);

    cout << "\nArray after removing duplicates:\n";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nNew length of array: " << newLength << endl;

    return 0;
}

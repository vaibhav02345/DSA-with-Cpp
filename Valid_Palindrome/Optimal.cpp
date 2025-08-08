#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower
using namespace std;

class Solution {
public:
    // Function to check if a string is a valid palindrome
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters from both ends
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            // Compare characters ignoring case
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "A man, a plan, a canal: Panama";

    if (sol.isPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is NOT a valid palindrome." << endl;
    }

    return 0;
}
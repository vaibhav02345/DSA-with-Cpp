#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    // Function to find the length of the longest substring without repeating characters
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> seen;  // Set to store unique characters in current window
        int left = 0, right = 0;   // Sliding window pointers
        int maxLen = 0;            // Stores the max length found so far

        // Loop through the string
        while (right < n) {
            // If current character is not in the set, it's unique
            if (seen.find(s[right]) == seen.end()) {
                seen.insert(s[right]);                       // Add to the set
                maxLen = max(maxLen, right - left + 1);      // Update max length
                right++;                                     // Expand the window
            } else {
                // If duplicate found, remove character at left and shrink window
                seen.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};

int main() {
    Solution sol;

    // 🔍 Sample Test Cases
    string s1 = "abcabcbb";
    string s2 = "bbbbb";
    string s3 = "pwwkew";

    cout << "Input: " << s1 << " → Output: " << sol.lengthOfLongestSubstring(s1) << endl;
    cout << "Input: " << s2 << " → Output: " << sol.lengthOfLongestSubstring(s2) << endl;
    cout << "Input: " << s3 << " → Output: " << sol.lengthOfLongestSubstring(s3) << endl;

    return 0;
}
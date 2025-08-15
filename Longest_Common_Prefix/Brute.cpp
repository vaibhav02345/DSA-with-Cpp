#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0]; // Start with first string as reference

    // Compare with each string
    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        // Compare characters until mismatch
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j); // Keep only matched part
        if (prefix.empty()) return ""; // No common prefix
    }
    return prefix;
}

int main() {
    vector<string> words = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(words);
    cout << "Longest Common Prefix (Brute): " << result << endl;

    return 0;
}
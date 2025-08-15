#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    sort(strs.begin(), strs.end());

    string first = strs.front();
    string last = strs.back();
    int i = 0;

    // Compare until mismatch
    while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }

    return first.substr(0, i);
}

int main() {
    vector<string> words = {"flower", "flow", "flight"};

    string result = longestCommonPrefix(words);
    cout << "Longest Common Prefix (Optimal): " << result << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    vector<int> freq(26, 0); // Frequency array

    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++; // Increment for s
        freq[t[i] - 'a']--; // Decrement for t
    }

    // If all zero, strings are anagrams
    for (int count : freq) {
        if (count != 0) return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
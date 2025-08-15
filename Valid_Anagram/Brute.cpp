#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    sort(s.begin(), s.end()); // Sort first string
    sort(t.begin(), t.end()); // Sort second string

    return s == t; // Compare sorted versions
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
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverseWords(string s) {
    // Step 1: Remove extra spaces in-place
    int n = s.size();
    int slow = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' || (slow > 0 && s[slow - 1] != ' ')) {
            s[slow++] = s[i];
        }
    }
    // Remove trailing space
    if (slow > 0 && s[slow - 1] == ' ') slow--;
    s.resize(slow);

    // Step 2: Reverse the entire string
    reverse(s.begin(), s.end());

    // Step 3: Reverse each word
    int start = 0;
    for (int end = 0; end <= s.size(); end++) {
        if (end == s.size() || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }

    return s;
}

int main() {
    string s = "  the   sky  is blue  ";
    
    string result = reverseWords(s);
    
    cout << "Reversed words: \"" << result << "\"" << endl;
    
    return 0;
}
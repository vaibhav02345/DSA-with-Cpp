#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    int original = x;
    long reversed = 0;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    return original == reversed;
}

int main() {
    int num = 121;
    if (isPalindrome(num)) {
        cout << num << " is a palindrome number." << endl;
    } else {
        cout << num << " is not a palindrome number." << endl;
    }

    return 0;
}

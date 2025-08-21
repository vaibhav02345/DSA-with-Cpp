#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0, count = 0;
    while (i < g.size() && j < s.size()) {
        if (s[j] >= g[i]) {
            count++; 
            i++; 
            j++; 
        } else {
            j++; // cookie too small, skip it
        }
    }
    return count;
}

int main() {
    vector<int> g = {1, 2};      // greed factors
    vector<int> s = {1, 2, 3};   // cookie sizes

    int result = findContentChildren(g, s);

    cout << "Result: " << result << endl;
    return 0;
}
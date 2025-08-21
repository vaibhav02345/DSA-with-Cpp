#include <iostream>
#include <vector>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    vector<bool> used(s.size(), false);
    int count = 0;

    for (int i = 0; i < g.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (!used[j] && s[j] >= g[i]) {
                used[j] = true; // assign cookie
                count++;
                break; // move to next child
            }
        }
    }
    return count;
}

int main() {
    vector<int> g = {1, 2, 3};   // greed factors
    vector<int> s = {1, 1};      // cookie sizes

    int result = findContentChildren(g, s);

    cout << "Result: " << result << endl;
    return 0;
}
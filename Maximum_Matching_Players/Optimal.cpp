#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());

    int i = 0, j = 0, count = 0;
    while (i < players.size() && j < trainers.size()) {
        if (players[i] <= trainers[j]) {
            count++; // match
            i++;
            j++;
        } else {
            j++; // trainer too weak, skip
        }
    }
    return count;
}

int main() {
    vector<int> players = {4, 7, 9};
    vector<int> trainers = {8, 2, 5, 8};

    int result = matchPlayersAndTrainers(players, trainers);

    cout << "Result: " << result << endl;
    return 0;
}
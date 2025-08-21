#include <iostream>
#include <vector>
using namespace std;

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
    vector<bool> used(trainers.size(), false);
    int count = 0;

    for (int i = 0; i < players.size(); i++) {
        for (int j = 0; j < trainers.size(); j++) {
            if (!used[j] && players[i] <= trainers[j]) {
                used[j] = true; // trainer assigned
                count++;
                break; // move to next player
            }
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
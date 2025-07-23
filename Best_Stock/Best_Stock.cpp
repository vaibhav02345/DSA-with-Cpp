#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to calculate max profit
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        // Update minPrice if we find a lower price
        if (price < minPrice) {
            minPrice = price;
        }
        // Check if selling now gives better profit
        else if (price - minPrice > maxProfit) {
            maxProfit = price - minPrice;
        }
    }

    return maxProfit;
}

// Custom main function to test
int main() {
    // Sample input
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Function call
    int profit = maxProfit(prices);

    // Output
    cout << "Maximum Profit: " << profit << endl;

    return 0;
}
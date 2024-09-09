// The cost of a stock on each day is given in an array find the max proift that u can make by buying & selling  on those day if the given  array of prices is sorted in decreasing order than profit cannot be earned at all.
//   
#include <iostream>
#include <vector>
using namespace std; 

int maxProfit(vector<int> &price, int start, int end) {
    int res = 0;
    // Consider every valid pair, find the profit with it
   // and recursively find profits on left and right of it
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
                int curr = (price[j] - price[i]) + 
                            maxProfit(price, start, i - 1) + 
                            maxProfit(price, j + 1, end);
                res = max(res, curr);
            }
        } 
    }
    return res;
}

// Wrapper function
int stockBuyAndSell(vector<int> &prices) {
    return maxProfit(prices, 0, prices.size()-1);
}

int main() {
    vector<int> prices = {100, 180, 260, 310, 40, 535,695};
    cout << stockBuyAndSell(prices);
    return 0;
}
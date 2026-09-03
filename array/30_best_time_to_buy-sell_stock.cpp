#include <iostream>
#include <vector>

using namespace std;

class Solution{
    int bestTimeToBuyAndSellStock(vector<int> &prices) {
        int minPrice = prices[0], maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
            minPrice = min(minPrice, prices[i]);
        }
        
        return maxProfit;
    }

    public: Solution() {
        vector<int> prices = {7, 1, 5, 3, 6, 4};
        cout << "Best time to Buy and sell Stock is " << bestTimeToBuyAndSellStock(prices) << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    return 0;
}
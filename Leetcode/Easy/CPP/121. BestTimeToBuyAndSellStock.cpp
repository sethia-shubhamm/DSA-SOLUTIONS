class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int costPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            if (price < costPrice) {
                costPrice = price; 
            } else {
                maxProfit = max(maxProfit, price - costPrice);
            }
        }
        return maxProfit;
    }
};

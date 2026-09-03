class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit = 0;
        int maxprofit = 0;
        for(int i = 0; i < prices.size();i++){
            if(min>prices[i]){
                min = prices[i];
            }
            profit = prices[i]-min;
            maxprofit = max(profit,maxprofit);
        }
        return maxprofit;
    }
};
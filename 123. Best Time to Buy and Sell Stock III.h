#ifndef 123__BEST_TIME_TO_BUY_AND_SELL_STOCK_III_H_INCLUDED
#define 123__BEST_TIME_TO_BUY_AND_SELL_STOCK_III_H_INCLUDED

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
            return 0;
        vector<int>leftProfit (prices.size(),0);
        {
            int minStock = prices[0];
            int maxprofit = 0;
            for(int i = 1; i < prices.size(); ++i) {
                int profit = prices[i] - minStock;
                if(profit > maxprofit)
                    maxprofit = profit;
                leftProfit[i]=maxprofit;
                if(prices[i] < minStock)
                    minStock = prices[i];
            }
        }
        vector<int>rightProfit (prices.size(),0);
        {
            int maxStock = prices[prices.size() - 1];
            int maxprofit = 0;
            for(int i = prices.size() - 2; i >= 0; --i) {
                int profit = maxStock - prices[i];
                if(profit > maxprofit)
                    maxprofit = profit;
                rightProfit[i]=maxprofit;
                if(prices[i] > maxStock)
                    maxStock = prices[i];
            }
        }
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
            maxprofit=max(maxprofit,leftProfit[i]+rightProfit[i]);
        return maxprofit;

    }
};

#endif // 123__BEST_TIME_TO_BUY_AND_SELL_STOCK_III_H_INCLUDED

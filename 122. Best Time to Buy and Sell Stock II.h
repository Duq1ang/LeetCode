#ifndef 122__BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H_INCLUDED
#define 122__BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H_INCLUDED

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
          return 0;
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1])
               maxprofit+=prices[i]-prices[i-1];
        }
        return maxprofit;
    }
};


#endif // 122__BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H_INCLUDED

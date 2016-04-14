#ifndef 121__BEST_TIME_TO_BUY_AND_SELL_STOCK_H_INCLUDED
#define 121__BEST_TIME_TO_BUY_AND_SELL_STOCK_H_INCLUDED

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if(prices.size()==0)
           return 0;
       int maxprofit=0;
       int minStock=prices[0];
       for(int i=0;i<prices.size();i++){
               minStock=min(minStock,prices[i]);
               maxprofit=max(maxprofit,prices[i]-minStock);
       }
       return maxprofit;


    }
};

#endif // 121__BEST_TIME_TO_BUY_AND_SELL_STOCK_H_INCLUDED

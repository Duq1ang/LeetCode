#ifndef 121__BEST_TIME_TO_BUY_AND_SELL_STOCK_H_INCLUDED
#define 121__BEST_TIME_TO_BUY_AND_SELL_STOCK_H_INCLUDED

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if(prices.size()==0)
           return 0;
       int maxprofit=0;
       int flag=prices[0];
       for(int i=0;i<prices.size();i++){
           if(prices[i]<flag){
               flag=prices[i];
           }
           else
               maxprofit=(maxprofit>(prices[i]-flag))?maxprofit:(prices[i]-flag);
       }
       return maxprofit;


    }
};

#endif // 121__BEST_TIME_TO_BUY_AND_SELL_STOCK_H_INCLUDED

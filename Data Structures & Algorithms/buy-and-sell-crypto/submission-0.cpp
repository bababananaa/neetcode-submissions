class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //init what i need 
        int buyVal=prices[0];
        int profit=0;
        int days=prices.size();
        //iterate through the days
        //comparing the buyVal with the next value in the arr
        //return profit as the max of nextVal-Buy and profit 
        //profit will be the past value
        for(int i=0;i<days;++i){
            int temp=0;
            temp=prices[i]-buyVal;
            profit=max(profit,temp);
            if(buyVal>prices[i]){
                buyVal=prices[i];
            }
        }
        return profit;
        
    }
};

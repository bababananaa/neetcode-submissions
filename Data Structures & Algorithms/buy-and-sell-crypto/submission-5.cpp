class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int days=prices.size();
        int buy= prices[0];
        int profit=0;
        for (int i =0; i<prices.size();++i){
            int temp=0;
            if (buy>prices[i]){
                buy=  prices[i];
            }
            temp=prices[i]-buy;
            profit=max(temp,profit);
        }
        return profit;

    }
    
};

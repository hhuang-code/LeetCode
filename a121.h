class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len == 0){
            return 0;
        }
        vector<int> profit(len, 0);
        int min = prices[0];
        for(int i = 0; i < len; i++){
            if(prices[i] >= min){
                profit[i] = prices[i] - min;
            }else{
                min = prices[i];
            }
        }
        
        int max = profit[0];
        for(int i = 0; i < len; i++){
            if(max < profit[i]){
                max = profit[i];
            }
        }
        
        return max;
    }
};

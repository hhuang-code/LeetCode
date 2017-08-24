class Solution {
public:
    int arrangeCoins(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        for(int k = floor(sqrt(2) * sqrt(n)); k <= n; k++){
            if(k * (k + 1) > 2 * n){
                return k - 1;
            }
        }
    }
};

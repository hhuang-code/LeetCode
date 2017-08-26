class Solution {
public:
    int guessNumber(int n) {
        int ub = n;
        int lb = 1;
        while(ub > lb){
            int g = (ub - lb) / 2 + lb;
            int res = guess(g);
            if(res == 0){
                return g;
            }else if(res == 1){
                lb = g + 1;
            }else{
                ub = g - 1;
            }
        }
        
        if(ub == lb){
            return ub;
        }
    }
};

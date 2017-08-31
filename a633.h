class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long a = 0; a * a <= c; a++){
            double b = sqrt(c - a * a);
            if(b == (int)b){        //convert int to float
                return true;
            }
        }
        
        return false;
    }
};

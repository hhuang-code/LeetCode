class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }
        int s = 0;
        int e = x / 2;
        long mid = 0;
        while(s < e){
            mid = (s + e) / 2;
            if(mid * mid == x){
                return mid;
            }else if(mid * mid < x){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        
        return s * s <= x ? s : s - 1;
    }
};

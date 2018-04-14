class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
           return false;
        }
        
        long pow = 10;
        while(x / pow){
            pow *= 10;
        }
        pow /= 10;
        
        int ox, nx, mul;
        ox = x;
        nx = 0;
        while(x){
            nx += (x % 10) * pow;
            x /= 10;
            pow /= 10;
        }

        if(nx == ox){
            return true;
        }else{
            return false;
        }
    }
};

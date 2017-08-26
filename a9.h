class Solution {
public:
    bool isPalindrome(int x) {
        int lpow = 1;
        int upow = 1;
        while(x / pow(10, upow)){
            upow++;
        }
        upow--;
        
        int hi, lo;
        while(x >= 10 || x <= -10){
            hi = x / pow(10, upow);
            lo = x % int(pow(10, lpow));
            if(hi != lo){
                return false;
            }
            x %= int(pow(10, upow));
            x /= pow(10, lpow);
            upow -= 2;
        }
        
        return true;
    }
};

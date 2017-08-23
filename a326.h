class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 ? !(1162261467 % n) : 0;   
        //1162261467 is the largest number which is the power of three and can be represented by int
    }
};

class Solution {
public:
    int getSum(int a, int b) {
        int result = a ^ b;         //get the sum of each digit
        int carry = (a & b) << 1;   //get the carry of each digit
        if(carry != 0){
            return getSum(result, carry);   //until the carry is 0
        }else{
            return result;
        }
    }
};

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int carry, sum;
        carry = 1;
        sum = 0;
        for(int i = digits.size() - 1; i >= 0; i--){
            sum = carry + digits[i];
            carry = sum / 10;
            res.push_back(sum % 10);
        }
        if(carry){
            res.push_back(carry);
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};

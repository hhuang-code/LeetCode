class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        int padding = abs(len1 - len2);
        if(len1 > len2){
            num1 = "0" + num1;
            num2 = string(padding + 1, '0') + num2;
        }else{
            num2 = "0" + num2;
            num1 = string(padding + 1, '0') + num1;
        }
        
        int carry, sum;
        carry = sum = 0;
        for(int i = num1.size() - 1; i >= 0; i--){
            sum = (num1[i] - '0') + (num2[i] - '0') + carry;
            carry = sum / 10;
            num1[i] = (sum % 10) + '0';
            sum = 0;
        }
        
        if(num1[0] == '0'){
            reverse(num1.begin(), num1.end());
            num1.pop_back();
            reverse(num1.begin(), num1.end());
        }
        
        return num1;
    }
};

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        int sum = 0;
        for(int i = 0; i < len; i++){
          sum += (toupper(s[i] - 'A') + 1) * pow(26, len - 1 - i);
        }

        return sum;
    }
};

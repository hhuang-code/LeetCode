class Solution {
public:
    int longestPalindrome(string s) {
        int len = s.size();
        map<char, int> m;
        for(int i = 0; i < len; i++){
          m[s[i]]++;
        }

        bool has_single = false;
        bool has_odd = false;
        int sum = 0;
        map<char, int>::iterator iter;
        for(iter = m.begin(); iter != m.end(); iter++){
          if(!(iter->second % 2)){
            sum += iter->second;
          }else{
            if(iter->second == 1){
              has_single = true;
            }else{
              sum += (iter->second - 1);
              has_odd = true;
            }
          }
        }

        if(has_single || has_odd){
          sum++;
        }

        return sum;
    }
};

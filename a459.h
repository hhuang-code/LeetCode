class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        bool res = false;
        int len = s.length();
        for(int i = 1; i < len; i++){
            if(s[0] == s[i]){
                int sublen = i;
                string pattern = s.substr(0, sublen);
                int j = i;
                for(j = i; j < len; j += sublen){
                    string substring = s.substr(j, sublen);
                    if(substring != pattern){
                        break;
                    }
                }
                if(j == len){
                    res = true;
                }
            }
        }
        
        return res;
    }
};

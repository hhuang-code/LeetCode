class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int num = strs.size();
        if(num == 0){
            return res;
        }
        int min_len = INT_MAX;
        for(int i = 0; i < num; i++){
            if(strs[i].length() < min_len){
                min_len = strs[i].length();
            }
        }
        
        for(int i = 0; i < min_len; i++){
            map<char, int> m;
            char c = strs[0][i];
            for(int j = 0; j < num; j++){
                m[strs[j][i]]++;
            }
            if(m[c] == num){
                res += c;
            }else{
                break;
            }
        }
        
        return res;
    }
};

class Solution {
public:    
    int lengthOfLastWord(string s) {
        int len = s.length();
        int end, st;
        end = st = -1;
        bool found = false;
        for(int i = len - 1; i >= 0 ;i--){
            if(s[i] != ' '){
                if(end == -1){
                    end = i;
                    found = true;
                }
            }
            if(s[i] == ' '){
                if(found){
                    st = i;
                }
            }
            if(st != -1 && end != -1){
                break;
            }
        }
        
        return end - st;
    }
};

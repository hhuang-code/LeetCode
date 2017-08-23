class Solution {
public:
    bool checkRecord(string s) {
        int absent_num = 0;
        bool is_late = false;
        int len = s.size();
        for(int i = 0; i < len; i++){
            if(s[i] == 'A'){
                absent_num++;
            }
            if(s[i] == 'L'){
                if(i + 1 < len && i + 2 < len && s[i + 1] == 'L' && s[i + 2] == 'L'){
                    is_late = true;
                }
            }
        }
        
        if(absent_num > 1 || is_late){
            return false;
        }else{
            return true;
        }
    }
};

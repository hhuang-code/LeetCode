class Solution {
public:
    int countSegments(string s) {
        int len = s.size();
        int i, j, cnt;
        i = j = cnt = 0;
        while(i < len && j < len){
            while(i < len && s[i] == ' '){
                i++;
            }
            if(i >= len){
                break;
            }
            j = i;
            while(j < len && s[j] != ' '){
                j++;
            }
            cnt++;
            i = j;
        }
        
        return cnt;
    }
};

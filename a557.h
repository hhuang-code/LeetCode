class Solution {
public:
    string reverseWords(string s) {
    int length = s.length();
     int start, end;
     char c;

     for(int i = 0, j = 0; j < length; j++){
        if(s[j] == ' ' || j == length - 1){
            start = i;
            end = (j == length - 1) ? j : j - 1;
            while(start < end){
                c = s[start];
                s[start] = s[end];
                s[end] = c;
                start++;
                end--;
            }
            i = j + 1;
        }
     }

     return s;    
    }
};

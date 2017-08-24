class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            i = s.find_first_of("aeouiAEOUI", i);
            j = s.find_last_of("aeouiAEOUI", j);
            if(i < j){            //attention!
            swap(s[i++], s[j--]);
            }
        }
        
        return s;
    }
};

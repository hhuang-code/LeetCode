class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int cnt = 0;
        int lines = 1;
        for (char ch : S) {
            if (cnt + widths[ch - 'a'] <= 100) {
                cnt += widths[ch - 'a'];
            } else {
                lines++;
                cnt = widths[ch - 'a'];
            }
        }
        
        vector<int> res;
        res.push_back(lines);
        res.push_back(cnt);
        
        return res;
    }
};

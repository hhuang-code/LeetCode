class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        for (char c : S) {
            if (J.find(c) != string::npos) {
                cnt++;
            }
        }
        
        return cnt;
    }
};

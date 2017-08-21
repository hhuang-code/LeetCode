class Solution {
public:
    char findTheDifference(string s, string t) {
      int slen = s.length();
      int tlen = t.length();
      int res = 0;
      for(int i = 0; i < slen; i++){
          res ^= s[i];
      }
      for(int i = 0; i < tlen; i++){
          res ^= t[i];
      }

      return static_cast<char>(res);
    }
};

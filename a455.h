class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
          if(g.size() == 0 || s.size() == 0){
            return 0;
          }

          sort(s.begin(), s.end());
          sort(g.begin(), g.end(), greater<int>());   //descending order

          vector<bool> flag(g.size(), false);
          int sum = 0;
          int glen = g.size();
          int slen = s.size();
          for(int i = 0; i < slen; i++){
            for(int j = 0; j < glen; j++){
              if(g[j] <= s[i] && !flag[j]){
          sum++;
          flag[j] = true;
                  break;
              }
            }
          }

          return sum;
        }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int len = numbers.size();
      vector<int> res;
      int reminder;
      for(int i = len - 1; i >= 0; i--){
        reminder = target - numbers[i];
        for(int j = 0; j < i; j++){
          if(numbers[j] == reminder){
            res.push_back(j + 1);
            res.push_back(i + 1);
            return res;
          }
        }
      }
    }
};

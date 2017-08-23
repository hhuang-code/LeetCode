class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
          sort(nums.begin(), nums.end());
          vector<int>::iterator rep = unique(nums.begin(), nums.end());
          if(rep - nums.begin() == nums.end() - nums.begin()){
            return false;
          }else{
            return true;
          }
    }
};

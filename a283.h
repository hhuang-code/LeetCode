class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int len = nums.size();
      int cur = 0;
      for(int i = 0; i < len; i++){
          if(nums[i] != 0){
              nums[cur] = nums[i];
              cur++;
          }
      }
      for(int i = len - 1; i >= cur; i--){
          nums[i] = 0;
      }
    }
};

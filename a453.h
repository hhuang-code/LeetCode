class Solution {
public:
/*
  sum: the sum of the vector
  min: the minimum number of the vector
  n: the size of the vector
  x: the result we want
  Thus: sum + (n - 1) * x = n * (min + x) ==> x = sum - n * min
 */
int minMoves(vector<int>& nums){
      int n = nums.size();
      int sum = 0;
      int min = nums[0];

      for(int i = 0; i < n; i++){
        sum += nums[i];
        if(nums[i] < min){
          min = nums[i];
        }
      }

      return sum - n * min;
    }

};

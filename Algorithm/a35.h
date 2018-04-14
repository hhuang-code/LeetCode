class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        for(int i = 0; i < len; i++){
            if(nums[i] == target){
                return i;
            }else if(nums[i] > target){
                return i;
            }else{
                if(i + 1 >= len){
                    return i + 1;
                }else{
                    if(nums[i + 1] > target){
                        return i + 1;
                    }
                }
            }
        }
    }
};

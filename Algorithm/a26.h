class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int tail, i, j;
        tail = i = j = 0;
        while(i < len && j < len){
            while(j < len && nums[j] == nums[i]){
                j++;
            }
            nums[tail] = nums[i];
            tail++;
            if(i == j){
                i++;
                j++;
            }else{
                i = j;
            }
        }
        
        while(len > tail){
            nums.pop_back();
            len--;
        }
        
        return nums.size();
    }
};

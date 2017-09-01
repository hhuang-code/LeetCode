class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int len = nums.size();
        if(len == 0){
            return 0;
        }
        vector<int> bak(nums);
        sort(nums.begin(), nums.end());
        if(nums == bak){
            return 0;
        }
        int s, e;
        s = 0;
        for(int i = 0; i < len; i++){
            if(nums[i] != bak[i]){
                s = i;
                break;
            }
        }
        e = len - 1;
        for(int i = len - 1; i >= 0; i--){
            if(nums[i] != bak[i]){
                e = i;
                break;
            }
        }
        
        return e - s + 1;
    }
};

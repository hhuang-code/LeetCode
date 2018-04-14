class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int esum, asum;
        esum = asum = 0;
        for(int i = 1; i <= n; i++){
            esum += i;
            asum += nums[i - 1];
        }
        
        return esum - asum;
    }
};

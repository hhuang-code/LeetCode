class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len = nums.size();
        int sum, max;
        sum = max = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        max = sum;
        
        for(int i = k; i < len; i++){
            sum += (nums[i] - nums[i - k]);
            max = max > sum ? max : sum;
        }
        
        return double(max) / k;
    }
};

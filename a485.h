class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
	int cur = 0;
	int len = nums.size();
	
	for(int i = 0; i < len; i++){
		if(nums[i] == 1){
			cur++;
		}else{
			if(cur > max){
				max = cur;
			}
			cur = 0;
		}
	}
	if(cur > max){
		max = cur;
	}
	
	return max;
    }
};

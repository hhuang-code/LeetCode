class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
	vector<int> result(len, 0);
	
	for(int i = 0; i < len; i++){
		result[nums[i] - 1] = 1;
	}
	nums.clear();
	for(int i = 0; i < len; i++){
		if(result[i] == 0){
			nums.push_back(i + 1);
		}
	}
	
	return nums;
    }
};

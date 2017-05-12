class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        map<int, int> nextNum;
        vector<int> result;

        int len = nums.size();
        int slen = findNums.size();
        bool flag = false;
        for(int i = 0; i < len; i++){
            flag = false;
            for(int j = i + 1; j < len; j++){
                if(nums[j] > nums[i]){
                    flag = true;
                    nextNum[nums[i]] = nums[j];
                    break;
                }
            }
            if(!flag){
                nextNum[nums[i]] = -1;
            }
        }

        for(int i = 0; i < slen; i++){
            result.push_back(nextNum.find(findNums[i])->second);
        }

        return result;  
    }
};

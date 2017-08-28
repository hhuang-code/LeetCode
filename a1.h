class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        map<int, int> m;
        for(int i = 0; i < len; i++){
            m[nums[i]]++;
        }
        
        int a, b;
        a = b = 0;
        map<int, int>::iterator iter;
        for(iter = m.begin(); iter != m.end(); iter++){
            if(m.find(target - iter->first) != m.end()){
                a = iter->first;
                b = target - iter->first;
                break;
            }
        }
        
        vector<int> res;
        for(int i = 0; i < len; i++){
            if(nums[i] == a || nums[i] == b){
                res.push_back(i);
            }
        }
        
        return res;
    }
};

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size();
        map<int, int> m;
        if(k >= len){
            k = len - 1;
        }
        for(int i = 0; i <= k; i++){
            m[nums[i]]++;
        }
        
        map<int, int>::iterator iter;
        for(iter = m.begin(); iter != m.end(); iter++){
            if(iter->second >= 2){
                return true;
            }
        }
        
        for(int i = k + 1; i < len; i++){
            if(nums[i] == nums[i - k - 1]){
                continue;
            }else{
                m[nums[i - k - 1]]--;
                if(m.find(nums[i]) != m.end() && m[nums[i]] >= 1){
                    return true;
                }else{
                    m[nums[i]]++;
                }
            }
        }
        
        return false;
    }
};

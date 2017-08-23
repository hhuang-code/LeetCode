class Solution {
public:
    int findLHS(vector<int>& nums) {
        int len = nums.size();
        map<int, int> m;
        for(int i = 0; i < len; i++){
            m[nums[i]]++;
        }
        
        int max = 0;
        map<int, int>::iterator iter, cur;
        for(iter = m.begin(); iter != m.end(); iter++){
            cur = m.find(iter->first + 1);
            if(cur != m.end()){
                if(max < iter->second + cur->second){
                    max = iter->second + cur->second;
                }
            }
        }
        
        return max;
    }
};

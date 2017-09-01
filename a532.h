class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int len = nums.size();
        map<int, int> m;
        for(int i = 0; i < len; i++){
            m[nums[i]]++;
        }
        int cnt = 0;
        map<int, int>::iterator iter;
        if(k == 0){
            for(iter = m.begin(); iter != m.end(); iter++){
                if(iter->second >= 2){
                    cnt++;
                }
            }
        }else if(k > 0){
            for(iter = m.begin(); iter != m.end(); iter++){
                if(m.find(iter->first + k) != m.end()){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};

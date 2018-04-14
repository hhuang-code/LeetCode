class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        int esum, asum;
        esum = asum = 0;
        map<int, int> m;
        for(int i = 0; i < len; i++){
            esum += (i + 1);
            asum += nums[i];
            m[nums[i]]++;
        }
        
        int loss, rep;
        map<int, int>::iterator iter;
        for(iter = m.begin(); iter != m.end(); iter++){
            if(iter->second > 1){
                rep = iter->first;
                break;
            }
        }
        vector<int> res;
        res.push_back(rep);
        res.push_back(esum - asum + rep);
        
        return res;
    }
};

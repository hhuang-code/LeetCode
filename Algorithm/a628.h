class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int len = nums.size();
        vector<int> pos, neg;
        for(int i = 0; i < len; i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        
        sort(pos.begin(), pos.end(), greater<int>());   //decending order
        sort(neg.begin(), neg.end(), greater<int>());
        
        int max = 0;
        if(pos.size() == 0){
            max = neg[0] * neg[1] * neg[2];
        }else if(pos.size() == 1 || pos.size() == 2){
            max = pos[0] * neg[neg.size() - 1] * neg[neg.size() - 2];
        }else{
            if(neg.size() == 0 || neg.size() == 1){
                max = pos[0] * pos[1] * pos[2];
            }else{
                max = (pos[0] * pos[1] * pos[2] > pos[0] * neg[neg.size() - 1] * neg[neg.size() - 2]) ? pos[0] * pos[1] * pos[2] : pos[0] * neg[neg.size() - 1] * neg[neg.size() - 2];
            }
        }
        
        return max;
    }
};

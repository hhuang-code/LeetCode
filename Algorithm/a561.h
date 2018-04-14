class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
     vector<int> vec(20001, 0);

    for(int i = 0; i < nums.size(); i++){
        vec[nums[i] + 10000]++;
    }

    int c = 0;
    bool flag = true;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > 0 && flag){
            c += (i - 10000);
            flag = false;
            vec[i]--;
        }
        if(vec[i] > 0 && !flag){
            flag = true;
            vec[i]--;
            i--;
        }
    }

    return c;
    }
};

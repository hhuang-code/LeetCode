class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
   int orow = nums.size();
    int ocol = nums[0].size();

    if(orow * ocol != r * c){
        return nums;
    }else{
        vector<vector<int>> ovec;
        int tr, tc;
        for(int i = 0; i < r; i++){
            vector<int> ivec;
            for(int j = 0; j < c; j++){
                tr = (i * c + j) / ocol;
                tc = (i * c + j) % ocol;
                ivec.push_back(nums[tr][tc]);
            }
            ovec.push_back(ivec);
        }
        return ovec;
    }
    }
};

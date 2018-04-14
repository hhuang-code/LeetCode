class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);
        for(int i = 1; i <= rowIndex; i++){
            int pre = res[0];
            for(int j = 1; j < i; j++){
                int cur = res[j];
                res[j] = cur + pre;
                pre = cur;
            }
        }
        
        return res;
    }
};

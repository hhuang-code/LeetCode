class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res;
        if(numRows == 0){
            return res;
        }
        vector<int> first;
        first.push_back(1);
        res.push_back(first);
        for(int i = 1; i < numRows; i++){
            vector<int> next;
            next.push_back(1);
            for(int j = 1; j <= i - 1; j++){
                next.push_back(res[i - 1][j - 1] + res[i - 1][j]);
            }
            next.push_back(1);
            res.push_back(next);
        }
        
        return res;
    }
};

class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        int L, W;
        int s = floor(sqrt(area));
        for(int i = s; i >= 1; i--){
            if(area % i == 0){
                L = (area / i) > i ? (area / i) : i;
                W = area / L;
                res.push_back(L);
                res.push_back(W);
                break;
            }
        }

        return res;
    }
};

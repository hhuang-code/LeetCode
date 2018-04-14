class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int x = left; x <= right; x++) {
            bool flag = true;
            int tmp = x;
            while (tmp) {
                int y = tmp % 10;
                if (y == 0 || x % y != 0) {
                    flag = false;
                    break;
                }
                tmp /= 10;
            }
            
            if (flag) {
                res.push_back(x);
            }
        }
        
        return res;
    }
};

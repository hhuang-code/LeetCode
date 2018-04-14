class Solution {
public:
    long getSum(int i){
        long sum = 0;
        for(int k = 1; k <= i; k++){
            sum += 9 * k * pow(10, k - 1);
        }
        
        return sum;
    }
    int findNthDigit(int n) {
        if(n < 10){
            return n;
        }
        int th = 1;
        while(getSum(th) < n){
            th++;
        }
        int pre = getSum(th - 1);
        int cur = n - pre;
        int idx = int(cur % th) == 0 ? cur / th : cur / th + 1;
        int num = pow(10, th - 1) + idx - 1;
        int pos = cur - th * (idx - 1);
        int res = num / int(pow(10, th - pos));
        res %= 10;
        
        return res;
    }
};

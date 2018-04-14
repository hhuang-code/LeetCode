class Solution {
public:
    int getSquareSum(int n){
        int sum = 0;
        while(n / 10){
            sum += pow(n % 10, 2);
            n /= 10;
        }
        sum += pow(n, 2);
        
        return sum;
    }
    
    bool isHappy(int n) {
        map<int, int> m;
        m[n]++;
        int sum = n;
        while(n != 1){
            sum = getSquareSum(n);
            map<int, int>::iterator cur = m.find(sum);
            if(cur != m.end()){
                return false;
            }else{
                m[sum]++;
                n = sum;
            }
        }
        
        return true;
    }
};

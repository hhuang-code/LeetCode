class Solution {
public:
    int findComplement(int num) {
    int c = 0, a = 1, tmp = num;
    while(tmp > 0){
        c++;
        tmp = (tmp >> 1);
    }
    for(int i = 0; i < c; i++){
        num = num ^ a;
        a = (a << 1);
    }

    return num;
    }
};

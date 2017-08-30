class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size();
        int blen = b.size();
        int maxlen = alen > blen ? alen : blen;
        string aleading(maxlen + 1 - alen, '0');
        a = aleading + a;
        string bleading(maxlen + 1 - blen, '0');
        b = bleading + b;
        
        int carry, sum;
        carry = sum = 0;
        for(int i = maxlen; i >= 0; i--){
            sum = (a[i] - '0') + (b[i] - '0') + carry;
            carry = sum / 2;
            a[i] = '0' + sum % 2;
        }
        
        if(a[0] == '0'){
            a = a.substr(1);
        }
        
        return a;
    }
};

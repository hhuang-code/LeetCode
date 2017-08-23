class Solution {
public:
    string convertToBase7(int num) {
        string res = "";
        vector<int> v;
        if(num < 0){
            res += "-";
            num = -num;
        }
        
        while(num / 7){
            v.push_back(num % 7);
            num /= 7;
        }
        v.push_back(num);
        
        while(!v.empty()){
            res += to_string(v.back()); //access to the last element
            v.pop_back();               //delete the last element
        }
        
        return res;
    }
};

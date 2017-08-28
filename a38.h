class Solution {
public:
    string countAndSay(int n) {
        string os = "1";
        string ns = "";
        if(n == 1){
            return os;
        }else{
            for(int k = 2; k <= n; k++){
                ns = "";
                int len = os.length();
                int i, j;
                i = j = 0;
                while(i < len){
                    while(j < len && os[i] == os[j]){
                        j++;
                    }
                    int rep = j - i;
                    ns += to_string(rep);
                    ns += os[i];
                    i = j;
                }
                os = ns;
            }
        }
        return ns;
    }
};

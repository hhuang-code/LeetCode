class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }else{
            int len = s.size();
            vector<int> vs(len, 0);
            vector<int> vt(len, 0);
            for(int i = 0; i < len; i++){
                vs[i] = t[i] - s[i];
                vt[i] = s[i] - t[i];
            }
            map<char, int> ms;
            for(int i = 0; i < len; i++){
                if(ms.find(s[i]) == ms.end()){
                    ms[s[i]] = vs[i];
                }else{
                    if(ms[s[i]] != vs[i]){
                        return false;
                    }
                }
            }
            map<char, int> mt;
            for(int i = 0; i < len; i++){
                if(mt.find(t[i]) == mt.end()){
                    mt[t[i]] = vt[i];
                }else{
                    if(mt[t[i]] != vt[i]){
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};

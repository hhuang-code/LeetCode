class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> sv(26, 0), pv(26, 0);
        int plen = p.size();
        int slen = s.size();
        if(s.size() < p.size()){
            return res;
        }else{
            for(int i = 0; i < plen; i++){
                pv[p[i] - 'a']++;
            }
            for(int i = 0; i < plen; i++){
                sv[s[i] - 'a']++;
            }
            if(sv == pv){
                res.push_back(0);
            }
            for(int i = plen; i < slen; i++){
                sv[s[i] - 'a']++;
                sv[s[i - plen] - 'a']--;
                if(sv == pv){
                    res.push_back(i - plen + 1);
                }
            }
        }
        
        return res;
    }
};

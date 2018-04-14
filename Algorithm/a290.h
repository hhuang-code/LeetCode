class Solution {
public:
    void split(const string& s, vector<string>& v, const string& c){
        string::size_type pos1, pos2;
        pos1 = 0;
        pos2 = s.find(c);
        while(pos2 != string::npos){
            v.push_back(s.substr(pos1, pos2 - pos1));
            pos1 = pos2 + c.size();
            pos2 = s.find(c, pos1);
        }
        if(pos1 != s.length()){
            v.push_back(s.substr(pos1));
        }
    }
    
    bool wordPattern(string pattern, string str) {
        vector<string> sp;
        split(str, sp, " ");
        size_t plen = pattern.size();
        size_t slen = sp.size();
        if(plen != slen){
            return false;
        }else{
            map<char, string> ptos;
            map<string, char> stop;
            for(size_t i = 0; i < plen; i++){
                if(ptos.find(pattern[i]) == ptos.end()){
                    ptos[pattern[i]] = sp[i];
                    if(stop.find(sp[i]) == stop.end()){
                        stop[sp[i]] = pattern[i];
                    }else{
                        return false;
                    }
                }else{
                    if(ptos[pattern[i]] == sp[i] && stop[sp[i]] == pattern[i]){ //bijection
                        continue;
                    }else{
                        return false;
                    }
                }
            }
            return true;
        }
    }
};

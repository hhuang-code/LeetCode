class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> mcnt;
        for (string cpdomain : cpdomains) {
            int space_pos = cpdomain.find(" ");
            int cnt = stoi(cpdomain.substr(0, space_pos));
            cpdomain = cpdomain.substr(space_pos + 1);
            if (mcnt.find(cpdomain) == mcnt.end()) {
                mcnt.insert(pair<string, int>(cpdomain, cnt));
            } else {
                mcnt[cpdomain] += cnt;
            }
            int dot_pos = 0;
            while ((dot_pos = cpdomain.find(".")) != string::npos) {
                cpdomain = cpdomain.substr(dot_pos + 1);
                if (mcnt.find(cpdomain) == mcnt.end()) {
                    mcnt.insert(pair<string, int>(cpdomain, cnt));
                } else {
                    mcnt[cpdomain] += cnt;
                }
            } 
        }
        
        vector<string> res;
        for (pair<string, int> p : mcnt) {
            res.push_back(to_string(p.second) + " " + p.first);
        }
        
        return res;
    }
};

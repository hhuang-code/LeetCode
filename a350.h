class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        map<int, int> m1;
        map<int, int> m2;
        for(int i = 0; i < len1; i++){
            m1[nums1[i]]++;
        }
        for(int i = 0; i < len2; i++){
            m2[nums2[i]]++;
        }
        
        vector<int> res;
        map<int, int>::iterator iter;
        for(iter = m1.begin(); iter != m1.end(); iter++){
            if(m2.find(iter->first) != m2.end()){
                int min = m2[iter->first] < iter->second ? m2[iter->first] : iter->second;
                for(int i = 1; i <= min; i++){
                    res.push_back(iter->first);
                }
            }
        }
        
        return res;
    }
};

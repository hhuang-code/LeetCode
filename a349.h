class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        if(nums1.size() == 0 || nums2.size() == 0){
            return res;
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());     //delete repeated elements
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

        nums1.insert(nums1.end(), nums2.begin(), nums2.end());            //concatenate two vectors
        sort(nums1.begin(), nums1.end());

        int len = nums1.size();
        for(int i = 0; i < len; i++){
          if(i + 1 < len && nums1[i] == nums1[i + 1]){
            res.push_back(nums1[i]);
            i++;
          }
        }

        return res;
    };
};

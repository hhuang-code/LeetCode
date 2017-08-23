class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        int len = nums.size();
	map<int, int> m;
	for(int i = 0; i < len; i++){   //sort by key in ascending order automatically
		m[nums[i]] = i;
	}

	vector<string> res(len, "");
	map<int, int>::reverse_iterator riter;
	int rank = 1;
	for(riter = m.rbegin(); riter != m.rend(); riter++){
		if(rank == 1){
			res[riter->second] = "Gold Medal";
		}else if(rank == 2){
			res[riter->second] = "Silver Medal";
		}else if(rank == 3){
			res[riter->second] = "Bronze Medal";
		}else{
			res[riter->second] = to_string(rank);
		}
		rank++;
	}

	return res;
    }
};

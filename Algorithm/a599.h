vector<string> findRestaurant(vector<string>& list1, vector<string>& list2){
  vector<string> res;
  int len1 = list1.size();
  int len2 = list2.size();
  int idx_sum, min_sum;
  min_sum = len1 + len2;
  for(int i = 0; i < len1; i++){
    for(int j = 0; j < len2; j++){
      if(list1[i] == list2[j]){
	idx_sum = i + j;
	if(idx_sum < min_sum){
	  while(!res.empty()){
	    res.pop_back();
	  }
	  res.push_back(list1[i]);
	  min_sum = idx_sum;
	}else if(idx_sum == min_sum){
	  res.push_back(list1[i]);
	}
      }
    }
  }

  return res;
}

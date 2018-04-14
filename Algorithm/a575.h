class Solution {
public:
    int distributeCandies(vector<int>& candies) {
      sort(candies.begin(), candies.end());

    int size = candies.size();
    int kinds = 1;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(candies[i] != candies[j]){
                kinds++;
                i = j - 1;
                break;
            }
        }
    }

    int diff = size - kinds;
    if(kinds <= diff){
        return kinds;
    }else{
        return kinds - (kinds - diff) / 2;
    }   
    }
};

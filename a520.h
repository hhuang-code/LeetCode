class Solution {
public:
    bool detectCapitalUse(string word) {
        string capital = word;
	transform(capital.begin(), capital.end(), capital.begin(), ::toupper);
	
	if(capital == word){
		return true;
	}else{
		int len = word.length();
		int same = 0;
		for(int i = 0; i < len; i++){
			if(capital[i] == word[i]){
				same++;
			}
		}
		if(same == 0){
			return true;
		}else if(same == 1 && capital[0] == word[0]){
			return true;
		}else{
			return false;
		}
	}
    }
};

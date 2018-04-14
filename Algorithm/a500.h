class Solution {
public:
    vector<string> findWords(vector<string>& words) {
     unordered_set<char> first({'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'});
        unordered_set<char> second({'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'});
        unordered_set<char> third({'z', 'x', 'c', 'v', 'b', 'n', 'm'});

        vector<unordered_set<char>> all;
        all.push_back(first);
        all.push_back(second);
        all.push_back(third);

        vector<string> result;
        int flag = 0;
        for(int i = 0; i < words.size(); i++){
            result.push_back(words[i]);
            for(int j = 0; j < 3; j++){
                if(all[j].count(tolower(words[i][0])) > 0){
                    flag = j;
                    break;
                }
            }
            for(int k = 1; k < words[i].length(); k++){
                if(all[flag].count(tolower(words[i][k])) == 0){
                    result.pop_back();
                    break;
                }
            }
        }

        return result;    
    }
};

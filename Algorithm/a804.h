class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string codes[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> patterns;
        for (string word : words) {
            string code = "";
            for (char ch : word) {
                code += codes[ch - 'a'];
            }
            patterns.insert(code);
        }
        
        return patterns.size();
    }
};

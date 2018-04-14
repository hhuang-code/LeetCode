class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> note(26, 0);
        vector<int> mag(26, 0);

        int nlen = ransomNote.size();
        int mlen = magazine.size();
        for(int i = 0; i < nlen; i++){
          note[tolower(ransomNote[i]) - 'a']++;
        }
        for(int i = 0; i < mlen; i++){
          mag[tolower(magazine[i]) - 'a']++;
        }

        for(int i = 0; i < 26; i++){
          if(note[i] > mag[i]){
            return false;
          }
        }

        return true;
    }
};

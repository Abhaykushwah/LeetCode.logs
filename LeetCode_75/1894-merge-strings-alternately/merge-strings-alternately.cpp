class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        
    int minLength = min(word1.size(),word2.size());

    for( int i = 0; i< minLength; i++){
            ans.append(1,word1[i]); // ans.append(1, word1[i]); appends a single character from word1.
            ans.append(1,word2[i]);
        }

        if(word1.size()>minLength){
            ans.append(word1.substr(minLength));
        }
        else if (word2.size()>minLength){
            ans.append(word2.substr(minLength));
        }

        return ans;
    }
};
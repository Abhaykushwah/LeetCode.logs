class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index_hold;
        vector<char> str_hold;
        for(int i = 0; i< s.size();i++){
            if( s[i]=='a' || s[i] =='e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ){
                str_hold.push_back(s[i]);
                index_hold.push_back(i);
            }
        }
        reverse(str_hold.begin(),str_hold.end());
        for(int i = 0; i<index_hold.size();i++){
            s[index_hold[i]] = str_hold[i];
        }
        return s;
    }
};
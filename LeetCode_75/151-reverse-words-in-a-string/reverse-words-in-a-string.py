class Solution:
    def reverseWords(self, s: str) -> str:
        return " ".join(s.split()[::-1])

# cpp solution
# class Solution {
# public:
#     string reverseWords(string s) {
#         istringstream iss(s);
#         vector<string> words;
#         string word, result;

#         while (iss >> word) {
#             words.push_back(word);
#         }

#         reverse(words.begin(), words.end());

#         for (const auto& w : words) {
#             if (!result.empty()) result += " ";
#             result += w;
#         }

#         return result;
  
#     }
# };
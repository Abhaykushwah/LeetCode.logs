class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        /*
        str1.length() = 6, str2.length() = 3
        gcd(6, 3) = 3
        str1.substr(0, 3) = "ABC"
        Output: "ABC"
        */
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int gcdLength = gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLength);
    }
};
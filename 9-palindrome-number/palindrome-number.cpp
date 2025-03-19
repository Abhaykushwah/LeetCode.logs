class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers are not palindromes

        int temp = x;
        int rev_num = 0;

        while (x) {
            if (rev_num > (INT_MAX / 10)) return false; // Prevent overflow
            rev_num = rev_num * 10 + x % 10;
            x /= 10;
        }

        return temp == rev_num;
    }
};

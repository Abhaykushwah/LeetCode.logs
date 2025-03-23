class Solution {
public:
    bool isPowerOfFour(int n) {
    // Bitwise Method (Efficient):
    // Check if n is a power of 2 (n & (n-1) == 0).
    // Ensure that the only set bit is in an odd position using n % 3 == 1
        return (n > 0) && ((n & (n - 1)) == 0) && (n % 3 == 1);
    }
};

class Solution{
public:
    bool isPowerOfTwo(int n) {
//    Powers of two in binary are:
//    1 (0001), 2 (0010), 4 (0100), 8 (1000), etc.
    return ((n>0) and (n&(n-1)) == 0);
            // n - 1 flips all bits
            // ex -> 8 1000
            // n-1-> 7 0111
            // bit wise and and check isEqual to 0 or not.  
    }   
};
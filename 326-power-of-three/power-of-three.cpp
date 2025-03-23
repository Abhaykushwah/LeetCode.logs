class Solution {
public:
    bool isPowerOfThree(int n) {
        // Method 1
        while(n>0 and n%3 == 0){
            n = n/3;
        }
        return n ==1;
        // Method 2 mod to max value of int
        // return (n>0) and (1162261467 % n == 0); 
    }
};

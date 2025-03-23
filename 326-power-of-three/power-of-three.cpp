class Solution {
public:
    bool isPowerOfThree(int n) {
        // while(n>0 and n%3 == 0){
        //     n = n/3;
        // }
        // return n ==1;
        
        return (n>0) and (1162261467 % n == 0);
    }
};
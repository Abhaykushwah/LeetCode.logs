class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n = hours.size();
        int count = 0;
        for( int i : hours){
            if( i >= target){
                count = count+1;
            }
        }
        return count;
    }
};
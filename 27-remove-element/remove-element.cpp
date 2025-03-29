class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i: nums){
            cout<<i<<" ";
        }cout<<endl;
        auto itr = remove(nums.begin(),nums.end(),val);
        nums.erase(itr,nums.end());
        return nums.size();
    }
};
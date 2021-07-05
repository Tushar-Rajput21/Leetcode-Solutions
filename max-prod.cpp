// Maximum Product Difference Between Two Pairs


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int n = nums.size()-1;
        
        sort(nums.begin(),nums.end());
        
        int x = (nums[n]*nums[n-1]) - (nums[0]*nums[1]);
        
        return x;
        
    }
};
// 1005. Maximize Sum Of Array After K Negations 

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
       int sum = 0; 
        
       sort(nums.begin(), nums.end());
        
        int j = k;
        int l = 0;
        
       
            while(k>0)
         {
          nums[0]=-nums[0]; 
            k--;
          sort(nums.begin(),nums.end());
                
            }
        
        
         for(int i = 0; i < nums.size(); i++)
            {
             sum += nums[i];
          }
        
        
        
        return sum;
        
        
        
    }
};

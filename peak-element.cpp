class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        map<int,int> hash;
        
        int in = 0;
        
        for(int i = 0; i < nums.size(); i++)
            hash[nums[i]] = i;
        
        for(auto itr = hash.begin(); itr != hash.end(); ++itr)
        {
            in = itr->second;
            
        }
        
        return in;
        
        
        
    }
};
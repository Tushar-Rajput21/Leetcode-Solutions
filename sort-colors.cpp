class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        map<int,int> hash;
        
        for(auto i: nums)
            hash[i]++;
        
        
        for(auto it = hash.begin(); it != hash.end(); it++)
        {
            int j = it->second;
            
            while(j != 0) 
            {
                nums.push_back(it->first);
                j--;
               vector<int>::iterator t = nums.begin();
                nums.erase(t);
                
             }
            
        }
        
        
        
       
        
        
    }
};
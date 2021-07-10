class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> hash;
         unordered_map<int,int> hash2;
        
        set<int> s;
        
        vector<int> v;
        
        for(auto i: arr)
            s.insert(i);
        
        for(auto i: arr)
            hash[i]++;
        
        for(auto i = s.begin(); i != s.end(); i++)
        {
            
            v.push_back(hash[*i]);        
                
        }
        
         for(auto i: v)
            hash2[i]++;
        
        sort(v.begin(), v.end());
        
       
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i-1] == v[i])
                return false;
            
                
        } 
        
        return true;
        
        
        
        
        
    }
};
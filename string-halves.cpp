class Solution {
public:
    bool halvesAreAlike(string s) {
        
        string c = "aeiouAEIOU";
        
        unordered_map<char,int> hash;
        
        for(auto i: c)
            hash[i]++;
            
        int c1 = 0, c2 = 0;
        
        int n = s.size();
        
        for(int i = 0; i < n/2; i++)
        {
            if(hash.find(s[i]) != hash.end())
                c1++;
        }
        
         for(int i = n/2; i < n; i++)
        {
            if(hash.find(s[i]) != hash.end())
                c2++;
        }
        
        return c1==c2;
        
        
    }
};
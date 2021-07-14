class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,int> hash1;
        
        unordered_map<char,int> hash2;
        
        
        if(s.size() != t.size())
            return false;
        
        for(int i = 0; i < t.size(); i++)
            hash1[s[i]] = t[i]; 
        
        for(int i = 0; i < t.size(); i++)
            hash2[t[i]] = s[i];
        
       
        
        
        for(int i = 0; i < t.size(); i++)
        {
            if( (hash1[s[i]] != t[i]) || (hash2[t[i]] != s[i]) )
                return false;
        }
        
        return true;
        
        
        
        
        
        
    }
};
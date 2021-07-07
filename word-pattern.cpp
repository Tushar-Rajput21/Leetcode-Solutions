class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
        stringstream str(s);
        
        vector<string> ss;
        
        string word;
        
        
        map<char,string> hash1;
        
        map<string,char> hash2;
        
        
        
        if(s.size() != pattern.size())
            return false;
        
        while(str >> word)
            ss.push_back(word);
        
        
            
        for(int i = 0; i < ss.size(); i++)
        {
            hash1[pattern[i]] = ss[i];
            hash2[ss[i]] = pattern[i];
            
        
        }
        
        for(int i = 0; i < ss.size(); i++)
        {
            if((hash1[pattern[i]] != ss[i]) || (hash2[ss[i]] != pattern[i]))
                return false;
        }
        
        return true;
               
        
    }
};
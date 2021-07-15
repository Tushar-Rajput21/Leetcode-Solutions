class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        vector<char> v;
        
        string c = "";
        
        int i = 0, j = 0;
        
        if(word2.size() <= word1.size())
        {
            while(i < word2.size())
            {
                v.push_back(word1[i]);
                v.push_back(word2[i]);
                i++;
            }
            
            while(i < word1.size()) {
                v.push_back(word1[i]);
                    i++;
            }
            
            
        }
        
        if(word2.size() >= word1.size())
        {
           while(i < word1.size())
            {
                v.push_back(word1[i]);
                v.push_back(word2[i]);
                i++;
            }
            
             while(i < word2.size()) {
                v.push_back(word2[i]);
                    i++;
            }
            
            
        }
        
        for(int i = 0; i < v.size(); i++)
            c += v[i];
        
        return c;
        
    }
};
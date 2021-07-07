class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string c = "";
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
                k--;
            
            if(k == 0)
                return c;

            
            c += s[i];
            
            
        }
        
        return c;
        
    }
};
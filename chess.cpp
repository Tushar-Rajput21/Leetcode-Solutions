class Solution {
public:
    bool squareIsWhite(string c) {
        
        string g = "abcdefgh";
        
        unordered_map<char,int> hash;
        
        int j = 1;
        
        for(int i = 0; i <= g.size(); i++) {
            hash[g[i]] = j;
            j++;
        }
        
            
       if(hash[c[0]]%2 != 0 )
       {
           if(c[1]%2 == 0)
               return true;
           
           else
               return false;
           
       }
        
        if(hash[c[0]]%2 == 0 )
       {
           if(c[1]%2 != 0)
               return true;
           
           else
               return false;
           
       }
        
        return false;
        
    }
};
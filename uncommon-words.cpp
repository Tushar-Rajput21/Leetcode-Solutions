class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        vector<string> ss;
       
        
        vector<string> ou;
        
        stringstream str1(s1);
        stringstream str2(s2);
        
        string word1;
        string word2;
        
        while(str1 >> word1)
            ss.push_back(word1);
        
         
        while(str2 >> word2)
            ss.push_back(word2);
        
        unordered_map<string,int> hash;
        
        for(auto i: ss)
            hash[i]++;
        
        for(int i = 0; i < ss.size(); i++)
        {
            if(hash[ss[i]] == 1)
                ou.push_back(ss[i]);
        }
        
        return ou;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
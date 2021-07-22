class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        
        vector<int> v;
        
        int n = prices.size();
        
        int j = 0;
        
        
        for(int i = 0; i < prices.size(); i++)
        {
            j = i+1;
            
            while(j < n)
            {
                if(prices[i] >= prices[j]){
                       prices[i] = prices[i]-prices[j];
                       break;
                }
                    j++;
                
            }
        }
        
        return prices;
        
    }
};
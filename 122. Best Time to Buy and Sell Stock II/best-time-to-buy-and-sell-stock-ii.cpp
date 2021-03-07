class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int amount=0;
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i]>=prices[j]){
                    i=j-1;
                    break;
                }
                if(prices[j]-prices[i]>0){
                    amount+=prices[j]-prices[i];
                    i=j-1;
                    break;
                }
            }
        }
        return amount;
    }
};

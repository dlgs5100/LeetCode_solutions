class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> costs_day={1,7,30};
        vector<int> dp(days.back()+1,costs[0]*days.back()+1);
        dp[0]=0;
        for(int i=1, index_days=0; i<dp.size(); i++){
            if(i != days[index_days]){
                dp[i] = dp[i-1];
                continue;
            }
            for(int j=0; j<costs.size(); j++){
                if(i-costs_day[j] >= 0)
                    dp[i] = min(dp[i], dp[i-costs_day[j]]+costs[j]);
                else
                    dp[i] = min(dp[i], dp[0]+costs[j]);
            }
            index_days++;
        }
        return dp.back();
    }
};

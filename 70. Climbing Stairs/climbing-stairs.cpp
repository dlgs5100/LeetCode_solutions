class Solution {
public:
    int climbStairs(int n) {
        vector<int> stair;
        stair.push_back(1);
        stair.push_back(2);
        for(int i = 2; i < n; i++)
            stair.push_back(stair.at(i-1)+stair.at(i-2));
        return stair.at(n-1);
    }
};

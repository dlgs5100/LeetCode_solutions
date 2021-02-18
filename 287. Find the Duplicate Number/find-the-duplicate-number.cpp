class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> table;
        for(int n : nums){
            if(table.find(n) == table.end())
                table[n] = 1;
            else
                return n;
        }
        return 0;
    }
};

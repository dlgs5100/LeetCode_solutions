class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> table;
        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); it++){
            if(table.find(*it) != table.end())
                return true;
            table.insert(*it);
        }
        return false;
    }
};

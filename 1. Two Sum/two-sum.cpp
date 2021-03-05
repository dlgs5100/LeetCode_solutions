class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            if(map.find(target - nums[i]) == map.end())
                map.insert({nums[i], i});
            else
                return vector<int>{map[target - nums[i]],i};
        }
        return result;
    }
};

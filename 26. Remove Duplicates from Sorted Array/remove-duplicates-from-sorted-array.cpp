class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int i=1;
        while(i < nums.size()){
            if(nums[i-1] == nums[i])
                nums.erase(nums.begin()+i);
            else
                i++;
        }
        return nums.size();
    }
};

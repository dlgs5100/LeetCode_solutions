class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> table;
        sort(nums1.begin(), nums1.end());
        for(vector<int>::iterator target=nums2.begin(); target!=nums2.end(); target++){
            int left=0, right=nums1.size()-1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (*target > nums1[mid])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            if(left < nums1.size() && nums1[left] == *target)
                table.insert(*target);
        }
        return vector<int>(table.begin(), table.end());
    }
};

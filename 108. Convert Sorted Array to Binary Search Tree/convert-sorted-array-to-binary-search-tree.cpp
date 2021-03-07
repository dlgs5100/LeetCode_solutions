/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildBST(vector<int>& nums, int front, int end){
        if(front > end)
            return NULL;
        int midIndex = (front+end)/2;
        TreeNode *cur = new TreeNode(nums[midIndex], NULL, NULL);
        cur->right = buildBST(nums, midIndex+1, end);
        cur->left = buildBST(nums, front, midIndex-1);
        return cur;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size()-1);
    }
};

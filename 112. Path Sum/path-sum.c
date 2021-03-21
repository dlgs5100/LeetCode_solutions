/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
​
bool dfs(struct TreeNode *root, int targetSum, int currentSum){
    if(!root)
        return false;
    if(!root->left && !root->right){
        return currentSum+root->val==targetSum ? true : false;
    }
    return dfs(root->left,targetSum,currentSum+root->val) || dfs(root->right,targetSum,currentSum+root->val);
}
bool hasPathSum(struct TreeNode *root, int targetSum){
    if(!root)
        return NULL;
    return dfs(root, targetSum, 0);
}

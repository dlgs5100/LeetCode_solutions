/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int dfs(struct TreeNode* root){
    if(!root)
        return 0;
    int leftLevel = 1+dfs(root->left);
    int rightLevel = 1+dfs(root->right);
    if(leftLevel == 1)  // 避免其中一個子分支為空，被判斷為完全無子分支
        return rightLevel;
    else if(rightLevel == 1)
        return leftLevel;
    return leftLevel < rightLevel ? leftLevel : rightLevel;
}
int minDepth(struct TreeNode* root){
    return dfs(root);
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int dfs(struct TreeNode *node){
    if(!node)
        return 0;
    int leftLevel = dfs(node->left);
    int rightLevel = dfs(node->right);
    if(leftLevel == -1 || rightLevel == -1 || abs(leftLevel-rightLevel)>1)
        return -1;
    return leftLevel > rightLevel ? (leftLevel+1) : (rightLevel+1);
}
bool isBalanced(struct TreeNode *root){
    return dfs(root) != -1 ? true : false;
}

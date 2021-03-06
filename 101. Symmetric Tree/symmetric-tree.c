/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool recursive(struct TreeNode* leftTree, struct TreeNode* rightTree){
    if(!leftTree && !rightTree)
        return true;
    else if(!leftTree || !rightTree || leftTree->val != rightTree->val)
        return false;
    else
        return recursive(leftTree->left, rightTree->right) && recursive(leftTree->right, rightTree->left);
}
bool isSymmetric(struct TreeNode* root){
    if(!root)
        return false;
    return recursive(root->left, root->right);
}

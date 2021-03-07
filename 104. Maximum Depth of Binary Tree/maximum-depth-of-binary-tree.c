/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int recursive(struct TreeNode* node, int count){
    if(!node)
        return count-1;
    int leftcount = recursive(node->left, count+1);
    int rightcount = recursive(node->right, count+1);
    return leftcount>=rightcount ? leftcount : rightcount;
}
int maxDepth(struct TreeNode* root){
    return recursive(root,1);  
}

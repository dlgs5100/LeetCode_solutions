/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    bool dfs(struct TreeNode* p, struct TreeNode* q){
        if(!p && !q)
            return true;
        else if((!p || !q) || (p->val != q->val))
            return false;
        else
            return dfs(p->left, q->left) && dfs(p->right, q->right);
    }
    return dfs(p, q);
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// ====================================================
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(q == NULL && p == NULL)
    {
        return true;
    }
    if((q == NULL || p == NULL) || (q->val != p->val))
    {
        return false;
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
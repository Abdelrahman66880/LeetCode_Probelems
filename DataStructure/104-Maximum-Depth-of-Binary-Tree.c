/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int leftsubTree = maxDepth(root->left);
    int rightsubTree = maxDepth(root->right);
    if(root->left == NULL){
        return rightsubTree + 1;
    }
    if (root->right == NULL){
        return leftsubTree + 1;
    }
    return (leftsubTree > rightsubTree ? leftsubTree : rightsubTree) + 1;
}
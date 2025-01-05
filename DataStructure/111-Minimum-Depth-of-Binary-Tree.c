/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root == NULL)
    {
       return 0; 
    }
    int leftsubTree = minDepth(root->left);
    int rightsubTree = minDepth(root->right);
    if(root->left == NULL && root->right ==  NULL)
    {
        return 1;
    }
    // we add one to consider the root node in our calculations
    if(root->right == NULL)
    {
        return 1 + leftsubTree;
    }
    if (root->left == NULL)
    {
        return 1 + rightsubTree;
    }

    return (leftsubTree <= rightsubTree ? leftsubTree : rightsubTree) + 1;
}
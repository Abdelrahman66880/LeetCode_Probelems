/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isLeaf(struct TreeNode *root)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return true;
    }
    return false;
}

int sumOfLeftLeaves(struct TreeNode* root) {
    int result = 0;
    if(root == NULL)
    {
        return 0;
    }
    if(isLeaf(root->left))
    {
        result += root->left->val;
    }
    result += sumOfLeftLeaves(root->left);
    result += sumOfLeftLeaves(root->right);
    return result;

}
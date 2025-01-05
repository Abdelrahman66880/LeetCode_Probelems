/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int getSize(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + getSize(root->left) + getSize(root->right);
}

void GetData(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL) {
        return;
    }
    GetData(root->left, arr, index);
    GetData(root->right, arr, index);
    arr[(*index)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    if(root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    int size = getSize(root);
    int* arr = (int*)malloc(sizeof(int) * size);
    int index = 0;
    GetData(root, arr, &index);
    *returnSize = size;
    return arr; 
}
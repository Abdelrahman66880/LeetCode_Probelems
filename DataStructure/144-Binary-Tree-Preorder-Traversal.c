// #ifndef TREENODE_H
// #define TREENODE_H
// typedef struct TreeNode {
//       int val;
//       struct TreeNode *left;
//       struct TreeNode *right;
//  }TreeNode;
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int GetSize(struct TreeNode *root)
{
    if(root == NULL){
        return 0;
    }
    int result = 1 + GetSize(root->left) + GetSize(root->right);
    return result;
}

void GetData(struct TreeNode *root, int *arr, int* index)
{
    if (root == NULL)
    {
        return;
    }
    // fill the arry of the data
    arr[*index] = root->val;
    (*index)++;
    GetData(root->left, arr, index);
    GetData(root->right, arr, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    if (root == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    int size = GetSize(root);
    // create the array to store the data
    int *arr = malloc(size * sizeof(int));
    int index = 0;
    GetData(root, arr, &index);
    // reset the size to be as the size of array
    *returnSize = size;
    return arr;
}
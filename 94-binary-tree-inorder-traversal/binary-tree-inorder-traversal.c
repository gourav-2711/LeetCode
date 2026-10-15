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
int Inorder(struct TreeNode *root , int *arr , int size){
    if(root != NULL){
        size = Inorder(root->left , arr , size);
        arr[size++] = root->val;
        size = Inorder(root->right, arr, size);
    }
    return size;
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = malloc(101 * sizeof(int));
    int size = 0;
    size = Inorder(root, arr , size);
    *returnSize = size;
    return arr;
}
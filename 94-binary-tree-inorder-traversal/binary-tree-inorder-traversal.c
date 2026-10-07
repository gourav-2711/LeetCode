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
int size = 0; 
void Inorder(struct TreeNode *root , int *arr){
    if(root == NULL){
        return ;
    }
    Inorder(root->left , arr);
    arr[size++] = root->val;
    Inorder(root->right, arr);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr = malloc(101 * sizeof(int));
    size = 0; 
    Inorder(root, arr);
    *returnSize = size;
    return arr;
}
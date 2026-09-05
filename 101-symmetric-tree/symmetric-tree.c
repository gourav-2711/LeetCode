/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool ismirror(struct TreeNode * left , struct TreeNode *right){
    if(left == NULL && right == NULL){
        return true;
    }
    if(left == NULL || right == NULL){
        return false;
    }
    if(left->val != right->val){
        return false ;
    }
    return ismirror(left->left , right->right) && ismirror(left->right , right->left);
}
bool isSymmetric(struct TreeNode* root) {
    if(root == NULL)
        return true;
    
    return ismirror(root->left , root->right);
}
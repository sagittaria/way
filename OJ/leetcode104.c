/**
 * 求二叉树深度--教材题
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    struct TreeNode* r = root;
    int hl,hr,hmax;
    if(r){
        hl=maxDepth(r->left);
        hr=maxDepth(r->right);
        hmax=hl>hr?hl:hr;
        return hmax+1;
    }else{
        return 0;
    }
}
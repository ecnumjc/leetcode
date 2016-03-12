/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
 bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return sameTree(root->left, root->right);
    }

    bool sameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;
        if ( (p == NULL && q != NULL) || (p != NULL && q == NULL) || (p->val != q->val) ) return false;
        return sameTree(p->left, q->right) && sameTree(p->right, q->left);
    }

};
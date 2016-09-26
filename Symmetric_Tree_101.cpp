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
        if(root==NULL)
            return true;
        else
            return Com(root->left,root->right);
    }
    bool Com(TreeNode* left,TreeNode* right)
    {
        if(left==NULL && right==NULL)
            return true;
        else if(left==NULL || right==NULL)
            return false;
        else if(left->val==right->val && Com(left->left,right->right) && Com(left->right,right->left))
            return true;
        else
            return false;
    }
};

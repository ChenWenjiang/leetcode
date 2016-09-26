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
    bool isBalanced(TreeNode* root) {
        if(Balanced(root)>=0)
            return true;
        else
            return false;
    }
    int Balanced(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ld = Balanced(root->left);
        int rd = Balanced(root->right);
        if(ld>=0 && rd>=0)
        {    
            if(ld>=rd && ld-rd<=1)
                return ld+1;
            else if(ld<rd && rd-ld<=1)
                return rd+1;
            else
                return -1;
        }
        else
            return -1;
        
    }
};

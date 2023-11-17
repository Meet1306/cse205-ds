/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool s(TreeNode *n1,TreeNode* n2){
        if(!n1 || !n2)
            return n1==n2;
        bool lh=s(n1->left,n2->right);
        if(lh==false)   return 0;
        bool rh=s(n1->right,n2->left);
        if(rh==false)   return 0;
        return n1->val==n2->val;
    }
    bool isSymmetric(TreeNode* root) {
        return s(root->left,root->right);
    }
};
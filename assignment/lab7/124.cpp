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
    int mx=INT_MIN;
    int h(TreeNode* root){
        if(!root)   return 0;
        int lh=max(0,h(root->left));
        int rh=max(0,h(root->right));
        mx=max(mx,root->val+lh+rh);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int x=h(root);
        return mx;
    }
};
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
    vector<int> a;
    map<int,int> mp;
    void inorder(TreeNode* root){
        if(!root)   return;
        inorder(root->left);
        mp[root->val]++;
        if(mp[root->val]>1){
            a.push_back(2);
            a.push_back(1);
            return;
        }
        a.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return is_sorted(a.begin(),a.end()) ;
    }
};
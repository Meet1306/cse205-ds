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
    TreeNode* h(vector<int> in,int is,int ie,vector<int> pre,int ps,int pe){
        if(ps>pe || is>ie)  return NULL;
        TreeNode* node=new TreeNode(pre[ps]);
        int idx=mp[pre[ps]];
        int len=idx-is;
        node->left=h(in,is,idx-1,pre,ps+1,ps+len);
        node->right=h(in,idx+1,ie,pre,ps+len+1,pe);
        return node;
    }

    map<int,int> mp;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        TreeNode* node=h(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1);
        return node;
    }
};
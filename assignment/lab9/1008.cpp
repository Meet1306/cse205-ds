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
    map<int,int> mp;
    TreeNode* h(vector<int> in,int is,int ie,vector<int> pre,int ps,int pe){
        if(ps>pe || is>ie)  return NULL;
        TreeNode* root=new TreeNode(pre[ps]);
        int idx=mp[pre[ps]];
        int len=idx-is;
        root->left=h(in,is,idx-1,pre,ps+1,ps+len);
        root->right=h(in,idx+1,ie,pre,ps+len+1,pe);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> a(preorder);
        sort(a.begin(),a.end());
        vector<int> inorder(a);
        for(int i=0;i<inorder.size();i++) mp[inorder[i]]=i;
        TreeNode* root=h(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1);
        return root;
    }
};
class Solution {
public:
    int cnt = 0;
    int ans;
    void inorder(TreeNode* root, int k){
        if(!root)   return;
        inorder(root->left,k);
        
        if(++cnt==k){
            ans = root->val;
            return;
        }
        inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
        
    }
};
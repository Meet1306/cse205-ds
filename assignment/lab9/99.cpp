void inorder(TreeNode* root, vector<int> &ans)
{
    if(!root) return;

    if(root -> left) inorder(root -> left, ans);

    ans.push_back(root->val);

    if(root -> right) inorder(root -> right, ans);
}

void Traverse(TreeNode* root, vector<int> &in, int &index)
{
    if(root == NULL) return;

    if(root -> left) Traverse(root -> left, in, index);

    if(root -> val != in[index])
    {
        root -> val = in[index];
    }
    index++;

    if(root -> right) Traverse(root -> right, in, index);
}

public:

    void recoverTree(TreeNode* root) {
        
        vector<int> in;
        inorder(root, in);

        sort(in.begin(), in.end());

        int index = 0;
        Traverse(root, in, index);
    }
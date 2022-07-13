class Solution {
public:
    int helper(TreeNode* root,int &res)
    {
        if(root==NULL)
        return 0;
        int lh=helper(root->left,res);
        int bh=helper(root->right,res);
        res=max(res,lh+bh);
        return 1+max(lh,bh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res=0;
        helper(root,res);
        return res;
    }
};
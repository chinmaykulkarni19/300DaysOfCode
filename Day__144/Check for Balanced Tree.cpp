class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        return true;
        int lh=height(root->left);
        int rh=height(root->right);
        return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
    }
    int height(Node *root)
    {
        if(root==NULL)
        return 0;
        else
        return 1+max(height(root->left),height(root->right));
    }
};
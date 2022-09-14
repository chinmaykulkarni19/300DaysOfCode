class Solution{
    public:
    int maxPathSum(Node* root)
    {
        int sum=0;
        if(root==NULL)
        {
            return 0;
        }
        return max(maxPathSum(root->left),maxPathSum(root->right))+root->data;
    }
};
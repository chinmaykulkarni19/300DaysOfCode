class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        int ans=0;
        if(root==NULL)
        return true;
        if(root->left==NULL &&root->right==NULL)
        return true;
        if(root->left)
        {
            ans+=root->left->data;
        }
        if(root->right)
        {
            ans+=root->right->data;
        }
        return (root->data==ans && isSumProperty(root->left) && isSumProperty(root->right));
    }
};
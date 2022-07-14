class Solution
{
    public:
    int sum=0;
     void transformTree(struct Node *root)
    {
        if(root==NULL)
        {
            return;
        }
         transformTree(root->right);
         int temp=root->data;
         root->data=sum;
         sum+=temp;
         transformTree(root->left);
    }
};

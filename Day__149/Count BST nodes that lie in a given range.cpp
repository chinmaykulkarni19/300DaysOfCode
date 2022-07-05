class Solution{
public:
    int getCount(Node *root, int l, int h)
    {
        if(root==NULL)
        {
            return 0;
        }
        int count=0;
        if(root->data>=l && root->data<=h)
        {
            count++;
        }
        if(root->left!=NULL)
        {
            count+=getCount(root->left,l,h);
            
        }
        if(root->right!=NULL)
        {
            count+=getCount(root->right,l,h);
            
        }
        return count;
    }
};
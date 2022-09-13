class Solution{
  public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k)
    {
        if(!root)
        {
            return NULL;
        }
        if(root->data>=k)
        {
            return deleteNode(root->left,k);
        }
        else
        {
            root->right=deleteNode(root->right,k);
        }
        return root;
    }
};
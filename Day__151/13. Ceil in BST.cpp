int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int res=0;
    while(root!=NULL)
    {
        if(root->data==input)
        {
            return root->data;
        }
        else if(root->data<input)
        {
            root=root->right;
        }
        else
        {
            res=root->data;
            root=root->left;
        }
        
    }
    return res;
    
}
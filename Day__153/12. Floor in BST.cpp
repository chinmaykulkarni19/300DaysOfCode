int floor(Node* root, int key) {
    int res=-1;
    while(root!=NULL)
    {
        if(root->data==key)
        {
            return key;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else
        {
            res=root->data;
            root=root->right;
        }
    }
    return res;
}
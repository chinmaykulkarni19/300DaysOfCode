Node* insert(Node* root, int Key) {
    if(root==NULL)
    {
        root = new Node(Key);
        return root;
    }
    if(root->data>Key)
    {
        root->left=insert(root->left,Key);
    }
    if(root->data<Key)
    {
        root->right=insert(root->right,Key);
    }
    return root;
}
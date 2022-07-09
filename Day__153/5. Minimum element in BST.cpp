int minValue(Node* root) {
    if(root==NULL)
    return -1;
    if(root->left==NULL)
    {
        return root->data;
    }
    return minValue(root->left);
}
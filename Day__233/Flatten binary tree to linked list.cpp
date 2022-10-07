class Solution
{
    public:
    Node* prev=NULL;
    void flatten(Node *root)
    {
        if (!root) return;
        flatten(root->right);
        flatten(root->left);
        root->left=NULL;
        root->right=prev;
        prev=root;
    }
};
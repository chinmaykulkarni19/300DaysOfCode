void solve(Node *root,vector<int> &res)
{
    if(root==NULL)
    return;
    res.push_back(root->data);
    solve(root->left,res);
    solve(root->right,res);
}
vector <int> preorder(Node* root)
{
    vector<int>res;
    solve(root,res);
    return res;
    
    
}
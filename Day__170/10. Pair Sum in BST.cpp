bool helper(Node *root, int X, unordered_set<int> &st)
{
    if(root==NULL)
    return false;
    if(helper(root->left,X,st)==true)
    {
        return true;
    }
    if(st.find(X-root->data)!=st.end())
    {
        return true;
    }
    else
    {
        st.insert(root->data);
        
    }
    return helper(root->right,X,st);
}

bool findPair(Node* root, int X) 
{
    unordered_set<int>st;
    return helper(root,X,st);
}
void postorder(Node *root,vector<int> &res)
{
    if(root!=NULL)
    {
        postorder(root->left,res);
    postorder(root->right,res);
    res.push_back(root->data);
    }
    
}
vector <int> postOrder(Node* root)
{
  vector<int>res;
  postorder(root,res);
  return res;
  
}
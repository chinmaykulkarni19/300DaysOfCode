class Solution{
  public:
  void inorder(Node* root,vector<int>&res)
  {
      if(root!=NULL)
      {
          inorder(root->left,res);
      res.push_back(root->data);
      inorder(root->right,res);
      }
      
  }
  void postorder(Node* root,vector<int>&res,int &i)
  {
      if(root!=NULL)
      {
          postorder(root->left,res,i);
          postorder(root->right,res,i);
          root->data=res[i++];
      }
  }
    void convertToMaxHeapUtil(Node* root)
    {
       
       vector<int>res;
       inorder(root,res);
       int i=0;
       postorder(root,res,i);
    }    
};
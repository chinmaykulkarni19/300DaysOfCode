class Solution {
  public:
  void helper(Node *root, int low, int high,vector<int>&res)
  {
      if(root==NULL)
      return;
      if(root->data>=low && root->data<=high)
      {
          res.push_back(root->data);
      }
      helper(root->left,low,high,res);
      helper(root->right,low,high,res);
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
           vector<int>res;
           helper(root,low,high,res);
           sort(res.begin(),res.end());
           return res;
    }
};
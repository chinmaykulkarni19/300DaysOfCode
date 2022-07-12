class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node *root,int &res)
    {
        if(root==NULL)
        return 0;
        int lh=height(root->left,res);
        int rh=height(root->right,res);
        res=max(res,lh+rh+1);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) {
        int res=0;
        height(root,res);
        return res;
        
    }
};
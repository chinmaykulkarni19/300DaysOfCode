class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inorder(Node *root,vector<int>&res)
    {
        if(root!=NULL)
        {
            inorder(root->left,res);
        res.push_back(root->data);
        inorder(root->right,res);
        }
        
    }
    vector<int> inOrder(Node* root) {
        vector<int>res;
        inorder(root,res);
        return res;
    }
    
};
class Solution
{
    
    public:
    //Function to check whether a Binary Tree is BST or not.
    vector<int>ans;
    void helper(Node *root)
    {
        if(root==NULL)
        return;
        helper(root->left);
        ans.push_back(root->data);
        helper(root->right);
    }
    bool isBST(Node* root) 
    {
        
        helper(root);
        for(int i=0;i<ans.size()-1;i++)
        {
             if(ans[i]>=ans[i+1]) return false;
            
        }
        return true;
    }
};
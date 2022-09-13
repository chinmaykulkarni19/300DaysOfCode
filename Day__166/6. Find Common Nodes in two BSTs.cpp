class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    void inorder(Node* root,vector<int>&v)
    {
        if(root==NULL)
        return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
        vector<int>ans1,ans2,res;
        inorder(root1,ans1);
        inorder(root2,ans2);
        int i=0,j=0;
        while(i<ans1.size() && j<ans2.size())
        {
            if(ans1[i]==ans2[j])
            {
                res.push_back(ans1[i]);
                i++;
                j++;
            }
            else if(ans1[i]<ans2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return res;
    }
};
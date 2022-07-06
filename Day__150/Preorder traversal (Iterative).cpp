class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        stack<Node*>s;
        vector<int>ans;
        s.push(root);
        while(s.empty()==false)
        {
            Node *curr=s.top();
            ans.push_back(curr->data);
            s.pop();
            
            if(curr->right!=NULL)
            {
                s.push(curr->right);
            }
            if(curr->left!=NULL)
            {
                s.push(curr->left);
            }
        }
        return ans;
    }
    
};
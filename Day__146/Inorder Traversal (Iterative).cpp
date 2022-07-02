class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int>ans;
        Node *curr=root;
        stack<Node *>s;
        while(s.empty()==false||curr!=NULL)
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            ans.push_back(curr->data);
            curr=curr->right;
        }
        return ans;
        
    }
    
};
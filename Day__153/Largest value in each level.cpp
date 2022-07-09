class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        queue<Node*>q;
        vector<int>res;
        q.push(root);
        while(q.empty()==false)
        {
            int t=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<t;i++)
            {
                Node *curr=q.front();
                q.pop();
                maxi=max(maxi,curr->data);
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            res.push_back(maxi);
        }
        return res;
    }
};
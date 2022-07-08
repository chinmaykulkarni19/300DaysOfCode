class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        queue<Node*>q;
        vector<int>ans;
        q.push(root);
        int res=0;
        while(q.empty()==false)
        {
            int t=q.size();
            res=max(res,t);
            for(int i=0;i<t;i++)
            {
                Node *curr=q.front();
                q.pop();
                ans.push_back(curr->data);
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
        }
        return res;
    }
};
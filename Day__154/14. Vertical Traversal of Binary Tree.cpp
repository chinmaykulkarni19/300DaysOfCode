class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        queue<pair<Node*,int>>q;
        map<int,vector<int>>mp;
        q.push({root,0});
        while(q.empty()==false)
        {
            auto p=q.front();
            Node *curr=p.first;
            int hd=p.second;
            mp[hd].push_back(curr->data);
            q.pop();
            if(curr->left)
            {
                q.push({curr->left,hd-1});
            }
            if(curr->right)
            {
                q.push({curr->right,hd+1});
            }
        }
        vector<int>res;
        for(auto it:mp)
        {
            vector<int>ans=it.second;
            for(auto ti:ans)
            {
                res.push_back(ti);
            }
        }
        return res;
    }
};
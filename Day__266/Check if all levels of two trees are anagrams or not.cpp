void level(Node *root,vector<vector<int>>&v)
    {
        vector<int>res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int t=q.size();
            for(int i=0;i<t;i++)
            {
                Node* curr=q.front();
                q.pop();
                res.push_back(curr->data);
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
                
            }
            sort(res.begin(),res.end());
            v.push_back(res);
            res={};
        }
    }
    bool areAnagrams(Node *root1, Node *root2)
    {
        vector<vector<int>>v1,v2;
        level(root1,v1);
        level(root2,v2);
        if(v1==v2)
        {
            return 1;
        }
        return 0;
    }
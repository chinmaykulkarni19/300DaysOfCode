class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        map<int,int>ans;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.empty()==false)
        {
            auto p=q.front();
            Node *curr=p.first;
            int hd=p.second;
            if(ans.find(hd)==ans.end())
            {
                ans[hd]=curr->data;
            }
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
        for(auto mm:ans)
        {
            res.push_back(mm.second);
        }
        return res;
    }

};
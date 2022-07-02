 vector<int> reverseLevelOrder(Node *root)
{
    queue<Node *>q;
    vector<int>res;
    q.push(root);
    while(q.empty()==false)
    {
        int t=q.size();
        for(int i=0;i<t;i++)
        {
            Node *curr=q.front();
            q.pop();
            res.push_back(curr->data);
            if(curr->right)
            {
                q.push(curr->right);
            }
            if(curr->left)
            {
                q.push(curr->left);
            }
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
vector<vector<int>> levelOrder(Node* node)
{
    queue<Node *>q;
    q.push(node);
    vector<vector<int>>res;
    if(node==NULL)
    return res;
    while(q.empty()==false)
    {
        int t=q.size();
        vector<int>temp;
        for(int i=0;i<t;i++)
        {
            Node *curr=q.front();
            q.pop();
            temp.push_back(curr->data);
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        res.push_back(temp);
    }
    return res;
}
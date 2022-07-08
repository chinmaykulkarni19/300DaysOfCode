vector<int> levelOrder(struct Node* node) {
    queue<Node*>q;
    vector<int>ans;
    q.push(node);
    while(q.empty()==false)
    {
        int t=q.size();
        for(int i=0;i<t;i++)
        {
            Node *curr=q.front();
            ans.push_back(curr->data);
            q.pop();
            
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
        
    }
    return ans;
}
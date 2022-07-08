class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector <int> v;
        if(root == NULL)
            return v ;
            
        queue<Node *> q;
        q.push(root);
        stack <int> s;
        bool var = true;
        while(!q.empty())
        {
            int count =q.size();
            for(int i=0 ; i< count ;i++)
            {
                Node *curr = q.front();
                q.pop();
                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr -> right);
                    
                if(var)
                {
                    v.push_back(curr->data);
                }
                else
                {
                    s.push(curr->data);
                }
            }
            while(!s.empty())
            {
                v.push_back(s.top());
                s.pop();
            }
            var = !var;
            
        }
        return v;
	
    }
    
};